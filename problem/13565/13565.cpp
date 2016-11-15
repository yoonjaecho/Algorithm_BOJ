#include <cstdio>

int a[1001][1001];
bool check[1001][1001];
int xx[] = {0,1,-1};
int yy[] = {1,0,0};
int m,n;

void dfs(int y, int x) {
    check[y][x] = 1;
    for(int i=0; i<3; i++) {
        int nx = x + xx[i];
        int ny = y + yy[i];
        if(nx<1 || nx>n || ny<1 || ny>m || a[ny][nx] || check[ny][nx]) {
            continue;
        }
        dfs(ny,nx);
    }
}

int main() {
    scanf("%d%d",&m,&n);
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++) 
            scanf("%1d",&a[i][j]);
    for(int i=1; i<=n; i++)
        if(!a[1][i] && !check[1][i])
            dfs(1,i);
    for(int i=1; i<=n; i++) {
        if(check[m][i]) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
