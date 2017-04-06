#include <cstdio>
#include <algorithm>
using namespace std;
int a[1001], dp[1001];
int main() {
    int n,m=-1e9; scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%d",a+i); 
        dp[i] = a[i];
        int t = dp[i];
        for(int j=1; j<i; j++) {
            if(a[j] < a[i] && dp[i] < dp[j] + t)
                dp[i] = t + dp[j];
        }
        m = max(m, dp[i]);
    }
    printf("%d\n",m);
}
