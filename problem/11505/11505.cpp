#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX_SIZE 1 << 21
#define MOD 1000000007
ll arr[MAX_SIZE];
struct SegTree {
    int size, start;
    SegTree(int n) :size(n) {
        start = 1;
        while(start < size) start <<= 1;
    }
    void build() {
        for(int i=start-1; i>0; i--)
            arr[i] = (arr[i*2] * arr[i*2+1]) % MOD;
    }
    ll mul(int L, int R) { return mul(L, R, 1, 0, start-1); }
    ll mul(int L, int R, int index, int NL, int NR) {
        if(R < NL || NR < L) return 1;
        if(L <= NL && NR <= R) return arr[index];            
        int mid = (NL + NR) / 2;
        return (mul(L, R, index*2, NL, mid) * mul(L, R, index*2+1, mid+1, NR)) % MOD;
    }
    void update(int index, ll value) {
        index += start;
        arr[index] = value;
        while(index > 1) {
            index /= 2;
            arr[index] = (arr[index*2] * arr[index*2+1]) % MOD;
        }
    }
};
int main() {
    int n, m, k; scanf("%d%d%d",&n,&m,&k);
    SegTree ST(n);
    for(int i=1; i<=ST.start*2; i++) arr[i] = 1;
    for(int i=0; i<n; i++)
        scanf("%lld", arr + ST.start + i);
    ST.build();
    for(int i=0; i<m+k; i++) {
        int q; scanf("%d", &q);
        if(q == 1) {
            int b; ll c; scanf("%d%lld", &b, &c);
            ST.update(b-1, c);
        }
        else {
            int b, c; scanf("%d%d", &b, &c);
            printf("%lld\n", ST.mul(b-1, c-1));
        }
    }
}