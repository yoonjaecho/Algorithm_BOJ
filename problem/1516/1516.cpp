#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> g[555];
queue<int> q;
int times[555], indegree[555], result[555];
int main() {
    int n; scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%d",&times[i]);
        while(1) {
            int pre; scanf("%d",&pre);
            if(pre == -1) break;
            indegree[i]++;
            g[pre].push_back(i);
        }
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
    for(int i=1; i<=n; i++)
        printf("%d\n",result[i]);
}

