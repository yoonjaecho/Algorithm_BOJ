#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define PII pair<int, int>
int N, M, in, ans = -1e9, empty, cnt, map[9][9], temp[9][9];
int dy[4] = {0, -1, 0, 1};
int dx[4] = {-1, 0, 1, 0};
vector<PII> virus, zero;
void dfs(PII cell) {
    int y = cell.first;
    int x = cell.second;
    if(temp[y][x] == 0) {
        temp[y][x] = 2;
        cnt--;
    }
    for(int i=0; i<4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(1 <= ny && ny <= N && 1 <= nx && nx <= M)
            if(temp[ny][nx] == 0)
                dfs({ny, nx});
    }
}
int main() {
    scanf("%d%d", &N, &M);
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            scanf("%d", &in);
            if(in == 2) virus.push_back({i, j});
            else if(in == 0) {
                zero.push_back({i, j});
                empty++; // count 0
            }
            map[i][j] = in;
        }
    }
    empty -= 3;
    int sz = (int)zero.size();
    for(int i=0; i<sz; i++) {
        for(int j=i+1; j<sz; j++) {
            for(int k=j+1; k<sz; k++) {
                for(int l=1; l<=N; l++)
                    for(int m=1; m<=M; m++)
                        temp[l][m] = map[l][m];
                temp[zero[i].first][zero[i].second] = 1;
                temp[zero[j].first][zero[j].second] = 1;
                temp[zero[k].first][zero[k].second] = 1;
                cnt = empty;
                for(PII cell : virus)
                    dfs(cell);
                ans = max(ans, cnt);
            }
        }
    }
    printf("%d\n", ans);
}