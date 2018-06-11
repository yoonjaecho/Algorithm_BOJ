#include <cstdio>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
struct Edge {
    int from, to, cost;
};
struct Node {
    int id, x, y, z;
    int dist(const Node &rhs) {
        return min({abs(x - rhs.x), abs(y - rhs.y), abs(z - rhs.z)});
    }
};
int find(vector<int>& root, int k) {
    if(k == root[k]) return k;
    return root[k] = find(root, root[k]);
}
bool merge(vector<int>& root, int p, int q) {
    p = find(root, p);
    q = find(root, q);
    if(p == q) return false;
    root[q] = p;
    return true;
}
int main() {
    int N; scanf("%d", &N);
    ll ans = 0;
    vector<int> root(N);
    vector<Node> P(N);
    vector<Edge> E;
    for(int i=0; i<N; i++) {
        scanf("%d%d%d", &P[i].x, &P[i].y, &P[i].z);
        P[i].id = i;
        root[i] = i;
    }
    sort(P.begin(), P.end(), [](Node& a, Node& b) {
        return a.x < b.x;
    });
    for(int i=1; i<N; i++)
        E.push_back({P[i - 1].id, P[i].id, P[i].dist(P[i - 1])});
    sort(P.begin(), P.end(), [](Node& a, Node& b) {
        return a.y < b.y;
    });
    for(int i=1; i<N; i++)
        E.push_back({P[i - 1].id, P[i].id, P[i].dist(P[i - 1])});
    sort(P.begin(), P.end(), [](Node& a, Node& b) {
        return a.z < b.z;
    });
    for(int i=1; i<N; i++)
        E.push_back({P[i - 1].id, P[i].id, P[i].dist(P[i - 1])});
    sort(E.begin(), E.end(), [](Edge& a, Edge& b) {
        return a.cost < b.cost;
    });
    for(Edge& e:E)
        if(merge(root, e.from, e.to))
            ans += e.cost;
    printf("%lld\n", ans);
}