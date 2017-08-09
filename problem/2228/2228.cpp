#include <cstdio>
#include <cstring>
#include <algorithm>
#define INF 987654321
using namespace std;
int dp[101][51], psum[101];
int solve(int n, int m) {
    if(m == 0) return 0;
    if(n <= 0) return -INF;
    int &ret = dp[n][m];
    if(ret != -1) return ret;
    ret = solve(n-1, m);
    for(int i=n; i>0; i--)
        ret = max(ret, solve(i-2, m-1) + psum[n] - psum[i-1]);
    return ret;
}
int main() {
    int n, m, in; scanf("%d%d", &n, &m);
    memset(dp, -1, sizeof(dp));
    for(int i=1; i<=n; i++) {
        scanf("%d", &in);
        psum[i] += psum[i-1] + in;
    }
    printf("%d\n", solve(n, m));
}