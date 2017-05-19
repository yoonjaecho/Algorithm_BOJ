#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

struct Edge {
    int to, w;
};

int N,MAX=-1e9,dest;
vector<Edge> g[10011];
bool check[10011];

void dfs(int node, int dist) {
    check[node] = true;
    if(MAX < dist) {
        MAX = dist;
        dest = node;
    }
    for(auto adj:g[node])
        if(!check[adj.to])
            dfs(adj.to, dist+adj.w);
}

int main() {
    scanf("%d",&N);
    for(int i=1; i<=N; i++) {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dfs(1,0);
    memset(check,0,sizeof(check));
    MAX = -1e9;
    dfs(dest,0);
    printf("%d\n",MAX);
}
