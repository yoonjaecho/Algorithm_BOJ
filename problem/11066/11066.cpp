#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[511], ps[511], dp[511][511];
int go(int s, int e) {
    if(s==e) return 0;
    int &ret = dp[s][e];
    if(ret != -1) return ret;
    ret = 1e9;
    int sum = ps[e] - ps[s-1];
    for(int i=s; i<e; i++)
        ret = min(ret, go(s,i) + go(i+1,e) + sum);
    return ret;
}
int main() {
    int tc,n; scanf("%d",&tc);
    while(tc--) {
        scanf("%d",&n);
        memset(ps, 0, sizeof(ps));
        memset(dp, -1, sizeof(dp));
        for(int i=1; i<=n; i++) {
            scanf("%d",a+i);
            ps[i] = ps[i-1] + a[i];
        }
        printf("%d\n",go(1,n));
    }
}
