#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[301];
int dp[301];
bool check[301];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    memset(check,false,sizeof(check));
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    check[1] = true;
    check[2] = true;
    for(int i=3; i<=n; i++) {
        int add;
        if(dp[i-1] > dp[i-2]){
            if(check[i-1]) {
                add = max(dp[i-2],dp[i-3]+a[i-1]);
            } else {
                add = dp[i-1];
            }
            check[i] = true;
        } else add = dp[i-2];
        dp[i] = a[i] + add;
    }
    printf("%d\n",dp[n]);
}
