#include <cstdio>
#include <cstring>
char a[111][111];
bool check[111][111];
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};
int cnt;
void dfs(int y, int x) {
    check[y][x] = true;
    for(int i=0; i<4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(!check[ny][nx] && a[ny][nx] == a[y][x]) {
            dfs(ny,nx);
        }
    }
}
int main() {
    int n; scanf("%d",&n);
    getchar();
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            scanf("%c",&a[i][j]); 
        getchar();
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(!check[i][j]) {
                dfs(i,j);
                cnt++;
            }
        }
    }
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=n; j++)
            if(a[i][j] == 'G')
                a[i][j] = 'R';
    printf("%d ",cnt);
    cnt = 0;
    memset(check,0,sizeof(check));
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(!check[i][j]) {
                dfs(i,j);
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
}
