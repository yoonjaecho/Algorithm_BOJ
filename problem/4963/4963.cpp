#include <cstdio>
#include <cstring>
int map[51][51];
bool check[51][51];
int cnt,w,h;
void dfs(int y, int x) {
    check[y][x] = true;
    cnt++;
    if(!check[y][x+1] && x<=w && map[y][x+1]) dfs(y,x+1);
    if(!check[y][x-1] && 1<=x && map[y][x-1]) dfs(y,x-1);
    if(!check[y+1][x] && y<=h && map[y+1][x]) dfs(y+1,x);
    if(!check[y-1][x] && 1<=y && map[y-1][x]) dfs(y-1,x);
    if(!check[y-1][x-1] && 1<=y && 1<=x && map[y-1][x-1]) dfs(y-1, x-1);
    if(!check[y-1][x+1] && 1<=y && x<=w && map[y-1][x+1]) dfs(y-1, x+1);
    if(!check[y+1][x-1] && y<=h && 1<=x && map[y+1][x-1]) dfs(y+1, x-1);
    if(!check[y+1][x+1] && y<=h && x<=w && map[y+1][x+1]) dfs(y+1, x+1);
}
int main() {
    while(1) {
        scanf("%d%d",&w,&h);
        if(!w && !h) break;
        memset(map,0,sizeof(map));
        memset(check,0,sizeof(check));
        for(int i=1; i<=h; i++)
            for(int j=1; j<=w; j++)
                scanf("%d",&map[i][j]);
        int ans = 0;
        for(int i=1; i<=h; i++) {
            for(int j=1; j<=w; j++) {
                cnt = 0;
                if(!check[i][j] && map[i][j]) dfs(i,j);
                if(cnt) ans++; 
            }
        }
        printf("%d\n",ans);
    }
}

