#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX_SIZE 1 << 21
ll arr[MAX_SIZE];
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
    ll sum(int L, int R) { return sum(L, R, 1, 0, start-1); }
    ll sum(int L, int R, int index, int NL, int NR) {
        if(R < NL || NR < L) return 0;
        if(L <= NL && NR <= R) return arr[index];            
        int mid = (NL + NR) / 2;
        return sum(L, R, index*2, NL, mid) + sum(L, R, index*2+1, mid+1, NR);
    }
    void update(int index, ll value) {
        index += start;
        arr[index] = value;
        while(index > 1) {
            index /= 2;
            arr[index] = arr[index*2] + arr[index*2+1];
        }
    }
};
int main() {
    int n, m; scanf("%d%d",&n,&m);
    SegTree ST(n);
    ST.build();
    for(int i=0; i<m; i++) {
        int q; scanf("%d", &q);
        if(q == 1) {
            int b; ll c; scanf("%d%lld", &b, &c);
            ST.update(b-1, c);
        }
        else {
            int b, c; scanf("%d%d", &b, &c);
            if(b > c) swap(b, c);
            printf("%lld\n", ST.sum(b-1, c-1));
        }
    }
}