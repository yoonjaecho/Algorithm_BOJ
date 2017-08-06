#include <cstdio>
#include <algorithm>
using namespace std;
int dp[100111];
int main() {
    int n; scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        dp[i] = i;
        for(int j=1; j*j<=i; j++) 
            dp[i] = min(dp[i], dp[i-j*j] + 1);
    }
    printf("%d\n",dp[n]);
}
