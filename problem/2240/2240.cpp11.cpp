#include <cstdio>
#include <algorithm>
using namespace std;
int dp[1001][31];
int plum[1001];
int main() {
    int t,w,first,ans=0;
    scanf("%d%d%d",&t,&w,&first);
    if(first==1) dp[0][0]=1;
    else dp[0][1]=1;
    for(int i=1; i<t; i++) {
        scanf("%d",&plum[i]);
        dp[i][0] = plum[i]==1? dp[i-1][0]+1:dp[i-1][0];
    }
    for(int i=1; i<t; i++) {
        int cur = plum[i];
        for(int j=1; j<=i+1; j++) {
            if(j<=w) {
                int check = (j%2+1 == cur)? 1:0;
                dp[i][j] = max(dp[i-1][j-1],dp[i-1][j])+check;
            }
        }
    }
    for(int i=0; i<=t; i++)
        ans = max(ans,dp[t-1][i]);
    printf("%d\n",ans);
}
