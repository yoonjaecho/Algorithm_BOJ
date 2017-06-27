#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int indegree[1111];
vector<int> g[1111];
int main() {
    int n,m; scanf("%d%d",&n,&m);
    for(int i=1; i<=m; i++) {
        int k,prev,cur; scanf("%d",&k);
        if(!k) continue;
        scanf("%d",&prev);
        for(int i=1; i<k; i++) {
            scanf("%d",&cur);
            indegree[cur]++;
            g[prev].push_back(cur);
            prev = cur;
        }
    }
    int result[1111];
    queue<int> q;
    for(int i=1; i<=n; i++)
        if(!indegree[i]) q.push(i);
    for(int i=1; i<=n; i++) {
        if(q.empty()) {
            puts("0");
            return 0;
        }
        int cur = q.front(); q.pop();
        result[i] = cur;
        for(int adj:g[cur])
            if(--indegree[adj] == 0)
                q.push(adj);
    }
    for(int i=1; i<=n; i++)
        printf("%d\n",result[i]);
}
