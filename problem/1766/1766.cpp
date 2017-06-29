#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
vector<int> g[32222];
priority_queue<int, vector<int>, greater<int>> pq;
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
            pq.push(i);
    for(int i=1; i<=n; i++) {
        int cur = pq.top(); pq.pop();
        result[i] = cur;
        for(int adj:g[cur])
            if(--indegree[adj] == 0)
                pq.push(adj);
    }
    for(int i=1; i<=n; i++)
        printf(i==n?"%d":"%d ",result[i]);
}
