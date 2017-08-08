#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int dp[1011][1011];
int card[1011], psum[1011];
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int n; scanf("%d",&n);
        memset(dp, 0, sizeof(dp));
        memset(psum, 0, sizeof(psum));
        memset(card, 0, sizeof(card));
        for(int i=1; i<=n; i++) {
            scanf("%d", &card[i]);
            psum[i] += psum[i-1] + card[i];
            dp[i][i] = card[i];
        }
        for(int k=1; k<=n-1; k++)
            for(int i=1; i<=n-k; i++)
                dp[i][i+k] = psum[i+k] - psum[i-1] - min(dp[i+1][i+k], dp[i][i+k-1]);
        printf("%d\n",dp[1][n]);
    }
}
