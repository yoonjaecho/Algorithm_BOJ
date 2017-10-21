#include <cstdio>
int M, N, ans;
int map[255][255];
bool check[255][255];
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
void dfs(int y, int x) {
    check[y][x] = 1;
    for(int i=0; i<8; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(0 <= ny && ny < M && 0 <= nx && nx < N)
            if(map[ny][nx] && !check[ny][nx])
                dfs(ny, nx);
    }
}
int main() {
    scanf("%d%d", &M, &N);
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
            scanf("%d", &map[i][j]);
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(map[i][j] && !check[i][j]) {
                dfs(i, j);
                ans++;
            }
        }
    }
    printf("%d\n", ans);
}