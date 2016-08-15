#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int m,n,arr[501][501];
int cache[501][501];
int pos[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int dp(int y, int x) {
    if(y==m && x==n) return 1;
    int& ret = cache[y][x];
    if(ret != -1) return ret;
    ret = 0;
    for(int p=0; p<4; p++) {
        int px = x + pos[p][0];
        int py = y + pos[p][1];
        if(1<=px && px<=n && 1<=py && py<=m)
            if(arr[py][px] < arr[y][x])
                ret += dp(py,px);
    }
    return ret;
}
int main()
{
    scanf("%d %d",&m,&n);
    for(int i=1; i<=m; i++) 
        for(int j=1; j<=n; j++) 
            scanf("%d",&arr[i][j]);
    memset(cache,-1,sizeof(cache));
    printf("%d",dp(1,1));
}
