#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> g[20001];
int color[20001];
void dfs(int here, int c) {
    color[here] = c;
    for(int i=0; i<g[here].size(); i++) {
        int next = g[here][i];
        if(!color[next])
            dfs(next, 3-c);
    }
}
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int v,e; scanf("%d%d",&v,&e);
        for(int i=1; i<=v; i++) {
            g[i].clear();
            color[i] = 0;
        }
        for(int i=1; i<=e; i++) {
            int a,b; scanf("%d%d",&a,&b);
            g[a].push_back(b);
            g[b].push_back(a);
        }
        for(int i=1; i<=v; i++) 
            if(color[i] == 0)
                dfs(i, 1);
        bool is_bp = 1;
        for(int i=1; i<=v; i++) {
            for(int j=0; j<g[i].size(); j++) {
                int next = g[i][j];
                if(color[i] == color[next]) {
                    is_bp = 0;
                    goto Land;
                }
            }
        }
Land:
        puts(is_bp? "YES":"NO");
    }
}
