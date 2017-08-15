#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX_SIZE 1 << 18 // 100,000
ll arr[MAX_SIZE];
struct SegTree {
    int size, start;
    SegTree(int n) :size(n) {
        start = 1;
        while(start < size) start <<= 1;
    }
    void build() {
        for(int i=start-1; i>0; i--) {
            int val = arr[i*2] * arr[i*2+1];
            arr[i] = val == 0? 0:val < 0? -1:1;
        }
    }
    ll get_ans(int L, int R) { return get_ans(L, R, 1, 0, start-1); }
    ll get_ans(int L, int R, int index, int NL, int NR) {
        if(R < NL || NR < L) return 1;
        if(L <= NL && NR <= R) return arr[index];
        int mid = (NL + NR) / 2;
        int val = get_ans(L, R, index*2, NL, mid) * get_ans(L, R, index*2+1, mid+1, NR);
        return val == 0? 0:val < 0? -1:1;
    }
    void update(int index, ll value) {
        index += start;
        arr[index] = value;
        while(index > 1) {
            index /= 2;
            int val = arr[index*2] * arr[index*2+1];
            arr[index] = val == 0? 0:val < 0? -1:1;
        }
    }
};
int main() {
    int n, m;
    while(~scanf("%d%d", &n, &m)) {
        memset(arr, 0, sizeof(arr));
        SegTree ST(n);
        for(int i=0; i<n; i++)
            scanf("%lld", arr + ST.start + i);
        ST.build();
        for(int i=0; i<m; i++) {
            char q; scanf(" %c", &q);
            if(q == 'C') {
                int b; ll c; scanf("%d%lld", &b, &c);
                ST.update(b-1, c);
            }
            else {
                int b, c; scanf("%d%d", &b, &c);
                ll ans = ST.get_ans(b-1, c-1);
                printf(ans == 0? "0":ans<0? "-":"+");
            }
        }
        puts("");
    }
}