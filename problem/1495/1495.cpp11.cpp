#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int v[101];
bool dp[101][1001];

int main()
{
    int n,s,m;
    scanf("%d %d %d",&n,&s,&m);
    for(int i=1; i<=n; i++) 
        scanf("%d",&v[i]);
    memset(dp,0,sizeof(dp));
    dp[0][s] = 1;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=m; j++) {
            if(j+v[i] <= m)
                dp[i][j] = dp[i-1][j+v[i]];
            if(j-v[i] >= 0) 
                dp[i][j] |= dp[i-1][j-v[i]];
        }
    }
    for(int i=m; i>=0; i--)
        if(dp[n][i]) {
            printf("%d\n",i);
            return 0;
        }
    puts("-1");
}

    

