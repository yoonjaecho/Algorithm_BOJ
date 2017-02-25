#include <cstdio>
#include <algorithm>
#define MOD 10007
#define ll long long
using namespace std;
ll dp[1001][1001];
ll bino(int n, int r) {
    if (n == r || !r) return 1;
    ll &ret = dp[n][r];
    if(ret != 0) return ret;
    return ret = ((bino(n-1, r) % MOD) + (bino(n-1, r-1) % MOD)) % MOD;
}
int main() {
    int n,m; scanf("%d%d", &n, &m);
    printf("%lld\n",bino(n,m));
}
