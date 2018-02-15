#include <cstdio>
#include <algorithm>
using namespace std;
int N, T, P, dp[22];
int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d%d", &T, &P);
        dp[i + 1] = max(dp[i + 1], dp[i]);
        dp[i + T] = max(dp[i + T], dp[i] + P);
    }
    printf("%d\n", dp[N]);
}