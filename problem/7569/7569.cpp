#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
struct tomato {
    int z,x,y;
};
int cnt = 0;
int a[102][102][102];
queue<tomato> q;
void push(int z, int x, int y, int t) {
    if(!a[z][x][y]) {
        a[z][x][y] = t + 1;
        cnt--;
        q.push({z,x,y});
    }
}
int main() {
    int m,n,h,cur;
    scanf("%d%d%d",&m,&n,&h);
    memset(a,-1,sizeof(a));
    for(int k=1; k<=h; k++) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                scanf("%d",&a[k][i][j]);
                if(a[k][i][j] == 1) q.push({k,i,j});
                else if(!a[k][i][j]) cnt++;
            }
        }
    }
    while(!q.empty()) {
        tomato t = q.front(); q.pop();
        cur = a[t.z][t.x][t.y];
        push(t.z-1, t.x, t.y, cur); 
        push(t.z+1, t.x, t.y, cur); 
        push(t.z, t.x-1, t.y, cur); 
        push(t.z, t.x+1, t.y, cur); 
        push(t.z, t.x, t.y-1, cur); 
        push(t.z, t.x, t.y+1, cur); 
    }
    printf("%d\n",cnt?-1:cur-1);
}
