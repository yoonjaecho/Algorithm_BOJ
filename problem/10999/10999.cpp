#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX_SIZE 1 << 21
ll arr[MAX_SIZE], lazy[MAX_SIZE];
struct SegTree {
    int size, start;
    SegTree(int n) :size(n) {
        start = 1;
        while(start < size) start <<= 1;
    }
    void build() {
        for(int i=start-1; i>0; i--)
            arr[i] = arr[i*2] + arr[i*2+1];
    }
    void propagate(int node, int NL, int NR) {
        if(lazy[node] != 0) {
            if(node < start) {
                lazy[node*2] += lazy[node];
                lazy[node*2+1] += lazy[node];
            }
            arr[node] += lazy[node] * (NR - NL + 1);
            lazy[node] = 0;
        }
    }
    ll sum(int L, int R) { return sum(L, R, 1, 0, start-1); }
    ll sum(int L, int R, int index, int NL, int NR) {
        propagate(index, NL, NR);
        if(R < NL || NR < L) return 0;
        if(L <= NL && NR <= R) return arr[index];
        int mid = (NL + NR) / 2;
        return sum(L, R, index*2, NL, mid) + sum(L, R, index*2+1, mid+1, NR);
    }
    void update(int L, int R, ll value) { return update(L, R, value, 1, 0, start-1); }
    void update(int L, int R, ll value, int index, int NL, int NR) {
        propagate(index, NL, NR);
        if(R < NL || NR < L) return;
        if(L <= NL && NR <= R) {
            lazy[index] += value;
            propagate(index, NL, NR);
            return;
        }
        int mid = (NL + NR) / 2;
        update(L, R, value, index*2, NL, mid);
        update(L, R, value, index*2+1, mid+1, NR);
        arr[index] = arr[index*2] + arr[index*2+1];
    }
};
int main() {
    int n, m, k; scanf("%d%d%d",&n,&m,&k);
    SegTree ST(n);
    for(int i=0; i<n; i++)
        scanf("%lld", arr + ST.start + i);
    ST.build();
    for(int i=0; i<m+k; i++) {
        int q; scanf("%d", &q);
        if(q == 1) {
            int b, c; ll d; scanf("%d%d%lld", &b, &c, &d);
            ST.update(b-1, c-1, d);
        }
        else {
            int b, c; scanf("%d%d", &b, &c);
            printf("%lld\n", ST.sum(b-1, c-1));
        }
    }
}