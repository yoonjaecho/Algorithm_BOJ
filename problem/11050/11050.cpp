#include <cstdio>
#include <algorithm>
using namespace std;
int dp[11][11];
int bino(int n, int r) {
    if (n == r || !r) return 1;
    int &ret = dp[n][r];
    if(ret != 0) return ret;
    return ret = bino(n-1, r) + bino(n-1, r-1);
}
int main() {
    int n,m;
    scanf("%d%d", &n, &m);
    printf("%d\n",bino(n,m));
}
