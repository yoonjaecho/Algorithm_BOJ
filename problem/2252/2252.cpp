#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> g[32222];
queue<int> q;
int result[32222], indegree[32222];
int main() {
    int n,m; scanf("%d%d",&n,&m);
    while(m--) {
        int a,b; scanf("%d%d",&a,&b);
        g[a].push_back(b);
        indegree[b]++;
    }
    for(int i=1; i<=n; i++) 
        if(!indegree[i]) 
            q.push(i);
    for(int i=1; i<=n; i++) {
        int cur = q.front(); q.pop();
        result[i] = cur;
        for(int adj:g[cur])
            if(--indegree[adj] == 0) 
                q.push(adj);
    }
    for(int i=1; i<=n; i++) 
        printf(i==n?"%d":"%d ",result[i]);
}
