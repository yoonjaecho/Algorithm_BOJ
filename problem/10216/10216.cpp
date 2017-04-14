#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct Point {
    int x,y,r;
} pos[3333];
bool check[3333];
vector<int> g[3333];
bool same_group(Point a, Point b) {
    double eucl_dist = (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
    return (a.r+b.r)*(a.r+b.r) >= eucl_dist;
}
void dfs(int node) {
    check[node] = true;
    for(int adj:g[node])
        if(!check[adj]) dfs(adj);
}
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int n,ans=0; scanf("%d",&n);
        memset(check,0,sizeof(check));
        for(int i=0; i<=n+1; i++)
            g[i].clear();
        for(int i=1; i<=n; i++) {
            scanf("%d%d%d",&pos[i].x,&pos[i].y,&pos[i].r);
            for(int j=1; j<i; j++) {
                if(same_group(pos[i],pos[j]))  {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        for(int i=1; i<=n; i++) {
            if(!check[i]) {
                ans++;
                dfs(i);
            }
        }
        printf("%d\n",ans);
    }
}
