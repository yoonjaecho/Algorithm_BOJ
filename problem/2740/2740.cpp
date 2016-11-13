#include <cstdio>

int A[101][101];
int B[101][101];
int ans[101][101];

int main() {
    int N, M, K;
    scanf("%d%d",&N,&M);
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            scanf("%d",&A[i][j]);
    scanf("%d%d",&M,&K);
    for(int i=0; i<M; i++)
        for(int j=0; j<K; j++)
            scanf("%d",&B[i][j]);

    for(int i=0; i<N; i++)
        for(int j=0; j<K; j++)
            for(int k=0; k<M; k++)
                ans[i][j] += A[i][k] * B[k][j];

    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++)
            printf("%d ", ans[i][j]);
        puts("");
    }
}
