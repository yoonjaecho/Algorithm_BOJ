#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;
int N, M, K;
vector<int> g[100011];
bool check[100011];
int parent[100011];
int find(int u) {
    if (u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
void dfs(int node) {
    check[node] = 1;
    for(int adj:g[node])
        if(!check[adj])
            dfs(adj);
}
int main() {
    scanf("%d%d", &N, &M);
    for(int i=0; i<N; i++)
        parent[i] = i;
    while(M--) {
        int a, b; scanf("%d%d", &a, &b);
        g[a].push_back(b);
        parent[b] = find(a);
    }
    for(int i=0; i<N; i++) {
        if(parent[i] == i && !check[i]) {
            dfs(i);
            K++;
        }
    }
    for(int i=0; i<N; i++) {
        if(!check[i]) {
            dfs(i);
            K++;
        }
    }
    printf("%d\n", K);
}