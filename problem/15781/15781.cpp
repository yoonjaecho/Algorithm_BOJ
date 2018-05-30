#include <cstdio>
#define MAX(a, b) (a) > (b)? (a):(b)
int main() {
    int N, M, in; scanf("%d%d", &N, &M);
    int n = -1e9, m = -1e9;
    while(N--) {
        scanf("%d", &in);
        n = MAX(n, in);
    }
    while(M--) {
        scanf("%d", &in);
        m = MAX(m, in);
    }
    printf("%d\n", n + m);
}