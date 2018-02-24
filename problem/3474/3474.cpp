#include <cstdio>
int main() {
    int T; scanf("%d", &T);
    while(T--) {
        int N, ans = 0; scanf("%d", &N);
        for(long long i = 5; i <= N; i *= 5)
            ans += N / i;
        printf("%d\n", ans);
    }
}