#include <cstdio>
int ans, m, in;
int main() {
    int N; scanf("%d", &N);
    while(N--) {
        scanf("%d", &in);
        if(in == m) {
            ans++;
            m = (m + 1) % 3;
        }
    }
    printf("%d\n", ans);
}