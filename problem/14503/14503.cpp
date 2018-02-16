#include <cstdio>
int N, M, cnt, map[51][51];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
void search(int y, int x, int dir);
void clean(int y, int x, int dir);
void search(int y, int x, int dir) {
    int adj = 0;
    while(adj < 4) {
        dir = dir == 0? 3 : dir - 1;
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        if(1 <= ny && ny <= N && 1 <= nx && nx <= M) {
            if(!map[ny][nx]) {
                clean(ny, nx, dir);
                return;
            }
        }
        adj++;
    }
    int back = (dir + 2) % 4;
    int by = y + dy[back];
    int bx = x + dx[back];
    if(map[by][bx] == 1) return;
    else search(by, bx, dir);
}
void clean(int y, int x, int dir) {
    map[y][x] = 2;
    cnt++;
    search(y, x, dir);
}
int main() {
    scanf("%d%d", &N, &M);
    int r, c, d; scanf("%d%d%d", &r, &c, &d);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            scanf("%d", &map[i][j]);
    clean(r + 1, c + 1, d);
    printf("%d\n", cnt);
}