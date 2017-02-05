#include <cstdio>
#include <cstring>
int a[51][51];
bool check[51][51];
int ans,m,n,k;
void dfs(int y, int x) {
    check[y][x] = true;
    if(y-1>=0 && !check[y-1][x] && a[y-1][x]) dfs(y-1,x);
    if(x-1>=0 && !check[y][x-1] && a[y][x-1]) dfs(y,x-1);
    if(y+1<=n && !check[y+1][x] && a[y+1][x]) dfs(y+1,x);
    if(x+1<=m && !check[y][x+1] && a[y][x+1]) dfs(y,x+1);
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        ans = 0;
        scanf("%d%d%d",&m,&n,&k);
        for(int i=0; i<k; i++) {
            int x,y;
            scanf("%d%d",&x,&y);
            a[y+1][x+1] = 1;
        }
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(check[i][j] || !a[i][j]) continue;
                else {
                    ans++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",ans);
    }
}
