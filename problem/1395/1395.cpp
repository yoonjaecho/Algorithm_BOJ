#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX_SIZE 1 << 18
int swit[MAX_SIZE], lazy[MAX_SIZE];
struct SegTree {
    int size, start;
    SegTree(int n) :size(n) {
        start = 1;
        while(start < size) start <<= 1;
    }
    void propagate(int node, int NL, int NR) {
        if(lazy[node] != 0) {
            if(node < start) {
                lazy[node*2] ^= 1;
                lazy[node*2+1] ^= 1;
                int on = 0;
                on += lazy[node*2]? (NR - NL + 1) / 2 - swit[node*2] : swit[node*2];
                on += lazy[node*2+1]? (NR - NL + 1) / 2 - swit[node*2+1] : swit[node*2+1];
                swit[node] = on;
            } else swit[node] ^= 1;
            lazy[node] = 0;
        }
    }
    int get_ans(int L, int R) { return get_ans(L, R, 1, 0, start-1); }
    int get_ans(int L, int R, int index, int NL, int NR) {
        propagate(index, NL, NR);
        if(R < NL || NR < L) return 0;
        if(L <= NL && NR <= R) return swit[index];
        int mid = (NL + NR) / 2;
        return get_ans(L, R, index*2, NL, mid) + get_ans(L, R, index*2+1, mid+1, NR);
    }
    void update(int L, int R) { return update(L, R, 1, 0, start-1); }
    void update(int L, int R, int index, int NL, int NR) {
        propagate(index, NL, NR);
        if(R < NL || NR < L) return;
        if(L <= NL && NR <= R) {
            lazy[index] ^= 1;
            propagate(index, NL, NR);
            return;
        }
        int mid = (NL + NR) / 2;
        update(L, R, index*2, NL, mid);
        update(L, R, index*2+1, mid+1, NR);
        swit[index] = swit[index*2] + swit[index*2+1];
    }
};
int main() {
    int n, m; scanf("%d%d",&n,&m);
    SegTree ST(n);
    for(int i=0; i<m; i++) {
        int q, s, t; scanf("%d%d%d", &q, &s, &t);
        if(s > t) swap(s, t);
        if(q == 0) ST.update(s-1, t-1);
        else printf("%d\n", ST.get_ans(s-1, t-1));
    }
}