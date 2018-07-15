#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> tree[500001];
bool check[500001];
int N, ans;
void dfs(int node, int depth) {
    check[node] = 1;
    for(int adj:tree[node]) {
        if(!check[adj])
            dfs(adj, depth + 1);
        else if(tree[node].size() == 1)
            ans += depth;
    }
}
int main() {
    scanf("%d", &N);
    for(int i=0; i<N-1; i++) {
        int a, b; scanf("%d%d", &a, &b);
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    dfs(1, 0);
    puts(ans&1? "Yes":"No");
}