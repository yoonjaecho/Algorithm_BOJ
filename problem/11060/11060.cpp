#include <cstdio>
#include <cstring>
#define MIN(a,b) (a)<(b)? (a):(b)
int a[1001],dp[1101][1101];
int main()
{
    int n,ans=1001;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=n; j++)
            dp[i][j] = 1001;
    dp[1][1] = 1;
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=n; j++) 
            if(dp[i][j] != 1001)
                for(int k=1; k<=a[i]; k++)
                    dp[i+k][j+1] = MIN(dp[i][j]+1,dp[i+k][j+1]);
    for(int i=1; i<=n; i++)
        ans = MIN(dp[n][i],ans);
    if(n==1)puts("0");
    else printf("%d\n",ans != 1001? ans-1:-1);
}
