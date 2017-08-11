#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX_SIZE 1 << 18
#define INF 1000000001
int min_tree[MAX_SIZE], max_tree[MAX_SIZE];
struct SegTree {
    int size, start;
    SegTree(int n) :size(n) {
        start = 1;
        while(start < size) start <<= 1;
    }
    void build() {
        for(int i=start-1; i>0; i--) {
            min_tree[i] = min(min_tree[i*2], min_tree[i*2+1]);
            max_tree[i] = max(max_tree[i*2], max_tree[i*2+1]);
        }
    }
    int get_min(int L, int R) { return get_min(L, R, 1, 0, start-1); }
    int get_max(int L, int R) { return get_max(L, R, 1, 0, start-1); }
    int get_min(int L, int R, int index, int NL, int NR) {
        if(R < NL || NR < L) return INF;
        if(L <= NL && NR <= R) return min_tree[index];
        int mid = (NL + NR) / 2;
        return min(get_min(L, R, index*2, NL, mid), get_min(L, R, index*2+1, mid+1, NR));
    }
    int get_max(int L, int R, int index, int NL, int NR) {
        if(R < NL || NR < L) return 0;
        if(L <= NL && NR <= R) return max_tree[index];            
        int mid = (NL + NR) / 2;
        return max(get_max(L, R, index*2, NL, mid), get_max(L, R, index*2+1, mid+1, NR));
    }
};
int main() {
    int n, m, in; scanf("%d%d",&n,&m);
    SegTree ST(n);
    for(int i=1; i<=ST.start*2-1; i++)
        min_tree[i] = INF;
    for(int i=0; i<n; i++) {
        scanf("%d", &in);
        min_tree[ST.start + i] = in;
        max_tree[ST.start + i] = in;
    }
    ST.build();
    for(int i=0; i<m; i++) {
        int a, b; scanf("%d%d", &a, &b);
        printf("%d %d\n", ST.get_min(a-1, b-1), ST.get_max(a-1, b-1));
    }
}