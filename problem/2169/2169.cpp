#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1003][1003];
int dp[1003][1003];
int left[1003][1003];
int right[1003][1003];
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=m; j++) 
            scanf("%d",&a[i][j]);
    dp[1][1] = a[1][1];
    for(int i=2; i<=m; i++) dp[1][i] = dp[1][i-1] + a[1][i];
    for(int i=2; i<=n; i++) {
        left[i][0] = dp[i-1][1];
        for(int j=1; j<=m; j++) 
            left[i][j] = a[i][j] + max(dp[i-1][j],left[i][j-1]);
        right[i][m+1] = dp[i-1][m];
        for(int j=m; j>=1; j--) 
            right[i][j] = a[i][j] + max(dp[i-1][j],right[i][j+1]);
        for(int j=1; j<=m; j++) 
            dp[i][j] = max(left[i][j],right[i][j]);
    }
    printf("%d\n",dp[n][m]);
}
