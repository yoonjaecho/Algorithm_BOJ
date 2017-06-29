#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int times[1111], result[1111], indegree[1111];
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        vector<int> g[1111];
        queue<int> q;
        memset(times, 0, sizeof(times));
        memset(result, 0, sizeof(result));
        memset(indegree, 0, sizeof(indegree));
        int n,k,w; scanf("%d%d",&n,&k);
        for(int i=1; i<=n; i++)
            scanf("%d",times+i);
        for(int i=1; i<=k; i++) {
            int a,b; scanf("%d%d",&a,&b);
            g[a].push_back(b);
            indegree[b]++;
        }
        scanf("%d",&w);
        for(int i=1; i<=n; i++) {
            if(!indegree[i]) {
                q.push(i);
                result[i] = times[i];
            }
        }
        for(int i=1; i<=n; i++) {
            int cur = q.front(); q.pop();
            for(int adj:g[cur]) {
                result[adj] = max(result[adj], result[cur] + times[adj]);
                if(--indegree[adj] == 0) q.push(adj);
            }
        }
        printf("%d\n",result[w]);
    }
}
