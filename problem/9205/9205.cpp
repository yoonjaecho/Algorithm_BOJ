#include <cstdio> 
#include <cstring>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
struct Point {
    int y,x;
} pos[111];
bool check[111];
vector<int> g[111];
int get_dist(Point a, Point b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}
void dfs(int node) {
    check[node] = true;
    for(int adj:g[node]) 
        if(!check[adj]) dfs(adj);
}
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        memset(check,0,sizeof(check));
        for(int i=0; i<=n+1; i++)
            g[i].clear();
        for(int i=0; i<=n+1; i++) {
            scanf("%d%d",&pos[i].y,&pos[i].x);
            for(int j=0; j<i; j++) {
                int dist = get_dist(pos[i], pos[j]);
                if(dist <= 1000) {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        dfs(0);
        puts(check[n+1]? "happy":"sad");
    }
}
