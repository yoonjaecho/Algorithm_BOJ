#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX_SIZE 1 << 21
int arr[MAX_SIZE], lazy[MAX_SIZE];
struct SegTree {
    int size, start;
    SegTree(int n) :size(n) {
        start = 1;
        while(start < size) start <<= 1;
    }
    void build() {
        for(int i=start-1; i>0; i--)
            arr[i] = arr[i*2] ^ arr[i*2+1];
    }
    void propagate(int node, int NL, int NR) {
        if(lazy[node] != 0) {
            if(node < start) {
                lazy[node*2] ^= lazy[node];
                lazy[node*2+1] ^= lazy[node];
            } else arr[node] ^= lazy[node];
            lazy[node] = 0;
        }
    }
    int get_ans(int L, int R) { return get_ans(L, R, 1, 0, start-1); }
    int get_ans(int L, int R, int index, int NL, int NR) {
        propagate(index, NL, NR);
        if(R < NL || NR < L) return 0;
        if(L <= NL && NR <= R) return arr[index];
        int mid = (NL + NR) / 2;
        return get_ans(L, R, index*2, NL, mid) ^ get_ans(L, R, index*2+1, mid+1, NR);
    }
    void update(int L, int R, int value) { return update(L, R, value, 1, 0, start-1); }
    void update(int L, int R, int value, int index, int NL, int NR) {
        propagate(index, NL, NR);
        if(R < NL || NR < L) return;
        if(L <= NL && NR <= R) {
            lazy[index] ^= value;
            propagate(index, NL, NR);
            return;
        }
        int mid = (NL + NR) / 2;
        update(L, R, value, index*2, NL, mid);
        update(L, R, value, index*2+1, mid+1, NR);
        arr[index] = arr[index*2] ^ arr[index*2+1];
    }
};
int main() {
    int n, m; scanf("%d", &n);
    SegTree ST(n);
    for(int i=0; i<n; i++)
        scanf("%d", arr + ST.start + i);
    ST.build();
    scanf("%d", &m);
    for(int i=0; i<m; i++) {
        int q; scanf("%d", &q);
        if(q == 1) {
            int b, c, d; scanf("%d%d%d", &b, &c, &d);
            if(b > c) swap(b, c);
            ST.update(b, c, d);
        }
        else {
            int b, c; scanf("%d%d", &b, &c);
            if(b > c) swap(b, c);
            printf("%d\n", ST.get_ans(b, c));
        }
    }
}