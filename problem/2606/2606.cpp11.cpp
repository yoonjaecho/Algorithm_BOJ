#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
vector<int> com[101];
bool check[101];
int res = 0;

void dfs(int node) {
    if(node != 1) {
        check[node] = true;
        res++;
    }
    for(int i=0; i<com[node].size(); i++) {
        int next = com[node][i];
        if(check[next] == false)
            dfs(next);
    }
}

int main() {
    int nCom,nEdge;
    scanf("%d %d",&nCom,&nEdge);

    while(nEdge--) {
        int u,v;
        scanf("%d %d",&u,&v);
        com[u].push_back(v);
        com[v].push_back(u);
    }
    dfs(1);
    printf("%d\n",res);
}
