#include <cstdio>
#include <algorithm>
using namespace std;
int a[1001][3];
int dp[1001][3];

int main()
{
    int n,res;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++) 
        for(int j=0; j<3; j++) {
            scanf("%d",&a[i][j]);
            if(!i) dp[i][j] = a[i][j];
        }
    for(int i=1; i<n; i++) {
        for(int j=0; j<3; j++) {
            if(j==0) dp[i][j] = a[i][j] + min(dp[i-1][1],dp[i-1][2]);
            else if(j==1) dp[i][j] = a[i][j] + min(dp[i-1][0],dp[i-1][2]);
            else dp[i][j] = a[i][j] + min(dp[i-1][0],dp[i-1][1]);
        }
    }
    printf("%d\n",min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]));
}
