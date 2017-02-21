#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[2][100001],dp[2][100001];
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int n; scanf("%d",&n);
        memset(dp,0,sizeof(dp));
        for(int i=0; i<2; i++)
            for(int j=1; j<=n; j++)
                scanf("%d",&a[i][j]);
        for(int j=1; j<=n; j++)
            for(int i=0; i<2; i++)
                dp[i][j] = max(dp[i^1][j-1],dp[i^1][j-2]) + a[i][j];
        printf("%d\n",max(dp[0][n],dp[1][n]));
    }
}
