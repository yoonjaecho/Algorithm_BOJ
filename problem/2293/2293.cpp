#include <cstdio>
int a[10001],dp[10001],n,k;
int main() {
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++) scanf("%d",a+i);
    dp[0] = 1;
    for(int i=1; i<=n; i++) for(int j=a[i]; j<=k; j++) dp[j] += dp[j-a[i]];
    printf("%d\n",dp[k]);
}
