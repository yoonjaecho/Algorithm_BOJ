#include <cstdio>
int main() {
    int N, Y = 0, M = 0; scanf("%d", &N);
    while(N--) {
        int time; scanf("%d", &time);
        Y += (time / 30 + 1) * 10;
        M += (time / 60 + 1) * 15;
    }
    if(Y < M) printf("Y %d\n", Y);
    else if(Y > M) printf("M %d\n", M);
    else printf("Y M %d\n", Y);
}