#include <cstdio>
int dp[31][31];
int main() {
    int tc;
    scanf("%d",&tc);
    for(int i=1; i<=30; i++) {
        for(int j=i; j<=30; j++) {
            if(i==1) dp[i][j] = j;
            else if(i==j) dp[i][j] = 1;
            else dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
        }
    }
    while(tc--) {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%d\n",dp[n][m]);
    }
}
