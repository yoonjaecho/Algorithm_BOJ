#include <cstdio>
#define ll long long
int a[101][101];
ll dp[101][101];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d",&a[i][j]);
    dp[1][1] = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(a[i][j] == 0 || dp[i][j] == 0) continue;
            if(i+a[i][j] <= n) dp[i+a[i][j]][j] += dp[i][j]; 
            if(j+a[i][j] <= n) dp[i][j+a[i][j]] += dp[i][j]; 
        }
    }
    printf("%lld\n",dp[n][n]);
}

