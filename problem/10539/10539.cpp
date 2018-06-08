#include <cstdio>
int B[111];
int main() {
    int N; scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        scanf("%d", &B[i]);
        B[i] *= i;
        printf(i == N? "%d\n":"%d ", B[i] - B[i - 1]);
    }
}