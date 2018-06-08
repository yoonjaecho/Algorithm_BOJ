#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int dy[4] = {0, -1, 0, 1};
int dx[4] = {-1, 0, 1, 0};
int map[111][111];
int N, ans = 1, num, min_h = 1e9, max_h = -1e9;
bool check[111][111];
void dfs(int y, int x, int h) {
    check[y][x] = 1;
    for(int i=0; i<4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(0 <= ny && ny < N && 0 <= nx && nx < N)
            if(map[ny][nx] > h && !check[ny][nx])
                dfs(ny, nx, h);
    }
}
int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &map[i][j]);
            min_h = min(min_h, map[i][j]);
            max_h = max(max_h, map[i][j]);
        }
    }
    for(int h=min_h; h<=max_h; h++) {
        memset(check, 0, sizeof(check));
        num = 0;
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(map[i][j] > h && !check[i][j]) {
                    dfs(i, j, h);
                    num++;
                }
            }
        }
        ans = max(ans, num);
    }
    printf("%d\n", ans);
}