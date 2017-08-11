#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX_SIZE 1 << 18
#define INF 1000000001
ll arr[MAX_SIZE];
struct SegTree {
    int size, start;
    SegTree(int n) :size(n) {
        start = 1;
        while(start < size) start <<= 1;
    }
    void build() {
        for(int i=start-1; i>0; i--)
            arr[i] = min(arr[i*2], arr[i*2+1]);
    }
    ll get_min(int L, int R) { return get_min(L, R, 1, 0, start-1); }
    ll get_min(int L, int R, int index, int NL, int NR) {
        if(R < NL || NR < L) return INF;
        if(L <= NL && NR <= R) return arr[index];
        int mid = (NL + NR) / 2;
        return min(get_min(L, R, index*2, NL, mid), get_min(L, R, index*2+1, mid+1, NR));
    }
};
int main() {
    int n, m; scanf("%d%d",&n,&m);
    SegTree ST(n);
    for(int i=1; i<=ST.start*2-1; i++)
        arr[i] = INF;
    for(int i=0; i<n; i++)
        scanf("%lld", arr + ST.start + i);
    ST.build();
    for(int i=0; i<m; i++) {
        int a, b; scanf("%d%d",&a,&b);
        printf("%lld\n", ST.get_min(a-1, b-1));
    }
}