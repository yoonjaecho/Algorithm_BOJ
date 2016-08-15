#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <tuple>
#define ll long long 
#define Edge tuple<int, int, int>
using namespace std;

int parent[10001];
int ranking[10001];

struct order {
    bool operator()(Edge const& a, Edge const& b) const {
        return (get<2>(a) > get<2>(b));
    }
};

void init(int n) {
    for(int i=0; i<n; i++) {
        parent[i] = i;
        ranking[i] = 0;
    }
}

int find(int x) {
    if(parent[x] == x)
        return x;
    else
        return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    if(ranking[a] < ranking[b])
        parent[a] = b;
    else {
        parent[b] = a;
        if(ranking[a] == ranking[b])
            ranking[a]++;
    }
}

int main()
{
    int n,nEdge;
    priority_queue<Edge, vector<Edge>, order> minHeap;
    scanf("%d%d",&n,&nEdge);
    init(n);
    for(int i=0; i<nEdge; i++){
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        minHeap.push(make_tuple(u,v,w));
    }
    int chosen = 0;
    ll ans = 0;
    while(chosen != n-1) {
        int x,y;
        Edge cur = minHeap.top();
        minHeap.pop();
        x = find(get<0>(cur));
        y = find(get<1>(cur));
        if(x==y) continue;
        unite(x,y);
        chosen++;
        ans += get<2>(cur);
    }
    printf("%lld\n",ans);
}

