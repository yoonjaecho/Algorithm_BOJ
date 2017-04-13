#include <cstdio>
#include <vector>
#include <cstdlib>
using namespace std;
struct UnionFind {
    vector<int> parent, rank;
    UnionFind(int n)
        :parent(n), rank(n,1) {
        for(int i=0; i<n; i++)
            parent[i] = i;
    }
    int find(int u) {
        if(u == parent[u]) return u;
        return parent[u] = find(parent[u]);
    }
    void merge(int u, int v) {
        u = find(u); v = find(v);
        if(u == v) return;
        if(rank[u] > rank[v])
            swap(u, v);
        if(rank[u] == rank[v])
            rank[v]++;
        parent[u] = v;
    }
};
struct Point {
    int y,x;
} pos[111];
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int n; scanf("%d",&n);
        UnionFind uf(n+2);
        for(int i=0; i<=n+1; i++) {
            scanf("%d%d",&pos[i].y,&pos[i].x);
            for(int j=0; j<i; j++)
                if(abs(pos[i].x - pos[j].x) + abs(pos[i].y - pos[j].y) <= 1000)
                    uf.merge(i,j);
        }
        puts(uf.find(0) == uf.find(n+1)? "happy":"sad");
    }
}
