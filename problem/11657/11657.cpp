#include <cstdio>
#include <vector>
#include <algorithm>
#define pi pair<int, int>
#define INF 987654321
using namespace std;
int main() {
    int nv, ne; scanf("%d%d",&nv,&ne);
    bool minus_cycle = false;
    vector<pi> g[501];
    vector<int> dist(501, INF);
    for(int i=0; i<ne; i++) {
        int a,b,c; scanf("%d%d%d",&a,&b,&c);
        g[a].push_back({b,c});
    }
    dist[1] = 0;
    for(int i=1; i<=nv; i++) {
        for(int j=1; j<=nv; j++) {
            for(auto &adj: g[j]) {
                int next = adj.first, cost = adj.second;
                if(dist[j] != INF && dist[next] > dist[j] + cost) {
                    dist[next] = dist[j] + cost;
                    if(i == nv) minus_cycle = true;
                }
            }
        }
    }
    if(minus_cycle) puts("-1");
    else for(int i=2; i<=nv; i++)
        printf("%d\n",dist[i] != INF? dist[i]:-1);
}
