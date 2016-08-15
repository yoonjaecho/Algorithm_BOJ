#include <cstdio>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int mx[4] = {0,1,-1,0};
int my[4] = {1,0,0,-1};
int box[1002][1002];
int main()
{
    int n,m,res=1,cnt=0;
    queue<pair<int,int>> q;
    scanf("%d %d",&m,&n);
    memset(box,-1,sizeof(box));
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++) {
            scanf("%d",&box[i][j]);
            if(box[i][j]==1) q.push(make_pair(i,j));
            if(box[i][j]==0) cnt++;
        }
    while(!q.empty()) {
        pair<int,int> p = q.front(); q.pop();
        int x = p.second;
        int y = p.first;
        for(int i=0; i<4; i++) {
            int nx = x+mx[i];
            int ny = y+my[i];
            if(box[ny][nx] == 0) {
                cnt--;
                box[ny][nx] = box[y][x]+1;
                q.push(make_pair(ny,nx));
                res = max(box[ny][nx],res);
            }
        }
    }
    if(cnt == 0) printf("%d\n",res-1);
    else printf("-1\n");
}
