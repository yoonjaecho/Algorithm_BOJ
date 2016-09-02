#include <cstdio>
#include <algorithm>
#define INF numeric_limits<int>::max()-1
using namespace std;
int a[1000001],dp[1000001];
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1; i<=k; i++) dp[i] = INF;
    for(int i=1; i<=n; i++) {
        scanf("%d",a+i);
        dp[a[i]] = 1;
    }
    for(int i=1; i<=k; i++) 
        for(int j=1; j<=n; j++) 
            if(i-a[j]>0) dp[i] = min(dp[i-a[j]]+1, dp[i]);
    printf("%d\n",dp[k]==INF? -1:dp[k]);
}
