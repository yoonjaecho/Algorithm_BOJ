#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX_SIZE 1 << 18
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
    for(int i=0; i<n; i++)
        scanf("%lld", arr + ST.start + i);
    ST.build();
    for(int i=0; i<m; i++) {
        int x, y, a; ll b; scanf("%d%d%d%lld", &x, &y, &a, &b);
        if(x > y) swap(x, y);
        printf("%lld\n", ST.sum(x-1, y-1));
        ST.update(a-1, b);
    }
}