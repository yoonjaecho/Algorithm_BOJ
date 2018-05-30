#include <cstdio>
int X[1011][1011], N;
int main() {
    int a, b, me; scanf("%d%d%d", &N, &a, &b);
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            scanf("%d", &X[i][j]);
            if(i == a && j == b)
                me = X[i][j];
        }
    }
    for(int i=1; i<=N; i++) {
        if(X[a][i] > me || X[i][b] > me) {
            puts("ANGRY");
            return 0;
        }
    }
    puts("HAPPY");
}