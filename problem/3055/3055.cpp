#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
char map[51][51];
int dist[51][51];
int main() {
    int r,c; scanf("%d%d%*c",&r,&c);
    int sx,sy,dstx,dsty;
    queue<pair<int, int>> q;
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            dist[i][j] = -1;
            scanf("%c",&map[i][j]);
            if(map[i][j] == '*') {
                q.push({i,j});
                dist[i][j] = 0;
            } else if(map[i][j] == 'S') {
                sy = i; sx = j;
                dist[i][j] = 0;
            } else if(map[i][j] == 'D') {
                dsty = i; dstx = j;
            }
        }
        getchar();
    }
    q.push({sy,sx});
    while(!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        char ch = map[y][x];
        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(1 <= nx && nx <= c && 1 <= ny && ny <= r) {
                if(map[ny][nx] == '.' || (ch == 'S' && map[ny][nx] == 'D')) {
                    dist[ny][nx] = dist[y][x] + 1;
                    map[ny][nx] = map[y][x];
                    q.push({ny,nx});
                }
            }
        }
    }
    if(dist[dsty][dstx] == -1) puts("KAKTUS");
    else printf("%d\n",dist[dsty][dstx]);
}
