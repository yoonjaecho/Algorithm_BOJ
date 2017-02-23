#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int map[101][101];
int group[101][101];
int dist[101][101];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int main() {
    int n; scanf("%d",&n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d",&map[i][j]);
    int num = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(map[i][j] && !group[i][j]) {
                group[i][j] = ++num;
                queue<pair<int,int>> q;
                q.push({i,j});
                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for(int k=0; k<4; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];
                        if(1 <= nx && nx <= n && 1 <= ny && ny <= n) {
                            if(map[nx][ny] && !group[nx][ny]) {
                                group[nx][ny] = num;
                                q.push({nx,ny});
                            }
                        }
                    }
                }
            }
        }
    }
    queue<pair<int,int>> q;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            dist[i][j] = -1;
            if(group[i][j]) {
                dist[i][j] = 0;
                q.push({i,j});
            }
        }
    }
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k=0; k<4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(1 <= nx && nx <= n && 1 <= ny && ny <= n) {
                if(dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    group[nx][ny] = group[x][y];
                    q.push({nx,ny});
                }
            }
        }
    }
    int ans = 987654321;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            for(int k=0; k<4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if(1 <= nx && nx <= n && 1 <= ny && ny <= n)
                    if(group[i][j] != group[nx][ny])
                        ans = min(ans, dist[i][j] + dist[nx][ny]);
            }
        }
    }
    printf("%d\n",ans);
}
