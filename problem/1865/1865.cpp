#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#define pi pair<int, int>
#define INF 987654321
using namespace std;
bool visited[501];
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int nv,ne,nw; scanf("%d%d%d",&nv,&ne,&nw);
        bool minus_cycle = false;
        memset(visited, false, sizeof(visited));
        vector<pi> g[501];
        vector<int> dist(501, INF);
        int a,b,c;
        for(int i=0; i<ne; i++) {
            scanf("%d%d%d",&a,&b,&c);
            g[a].push_back({b,c});
            g[b].push_back({a,c});
        }
        for(int i=0; i<nw; i++) {
            scanf("%d%d%d",&a,&b,&c);
            g[a].push_back({b,-c});
        }
        for(int i=1; i<=nv; i++) {
            if(!visited[i]) {
                dist[i] = 0;
                for(int i=1; i<=nv; i++) {
                    for(int j=1; j<=nv; j++) {
                        for(auto &adj: g[j]) {
                            int next = adj.first, cost = adj.second;
                            visited[i] = 1;
                            if(dist[j] != INF && dist[next] > dist[j] + cost) {
                                dist[next] = dist[j] + cost;
                                if(i == nv) minus_cycle = true;
                            }
                        }
                    }
                }
            }
        }
        if(minus_cycle) puts("YES");
        else puts("NO");
    }
}
