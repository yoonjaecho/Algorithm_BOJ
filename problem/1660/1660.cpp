#include <cstdio>
#include <cstring>
#include <algorithm>
#define INF numeric_limits<int>::max()-1
using namespace std;
int a[123],b[123],dp[300001];
int main() {
    int n,idx;
    scanf("%d",&n);
    dp[1] = b[1] = a[1] = 1;
    for(int i=1; i<=n; i++) dp[i] = INF;
    for(int i=2; i<=122; i++) {
        a[i] = a[i-1] + i;
        b[i] += b[i-1] + a[i];
    }
    for(int i=1; i<=122; i++) {
        if(n < b[i]) {
            idx = i-1;    
            break;
        }
    }
    for(int i=1; i<=idx; i++) dp[b[i]] = 1;
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=idx; j++) 
            if(i-b[j] > 0) dp[i] = min(dp[i-b[j]]+1,dp[i]);
    printf("%d\n",dp[n]);
}
