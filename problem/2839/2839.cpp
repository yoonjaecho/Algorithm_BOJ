#include <cstdio>
#include <algorithm>
using namespace std;
int dp[5001],n;
int main() {
    scanf("%d",&n);
    dp[1] = dp[2] = dp[4] = 1e9;
    dp[3] = dp[5] = 1;
    for(int i=6; i<=n; i++) 
        dp[i] = min(dp[i-3],dp[i-5]) + 1;
    printf("%d\n",dp[n]<1e9? dp[n]:-1);
}
