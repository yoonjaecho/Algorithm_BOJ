#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct Node {
    int num, gold, silver, bronze;
};
vector<Node> v;
int main() {
    int N, p, ans = 2, tie = 0; scanf("%d%d", &N, &p);
    for(int i=1; i<=N; i++) {
        int n, g, s, b; scanf("%d%d%d%d", &n, &g, &s, &b);
        v.push_back({n, g, s, b});
    }
    sort(v.begin(), v.end(), [&](Node const &a, Node const &b) {
        return a.gold != b.gold? a.gold > b.gold :
            a.silver != b.silver? a.silver > b.silver : a.bronze > b.bronze;
    });
    Node before = v[0];
    if(before.num == p) {
        puts("1");
        return 0;
    }
    for(int i=1; i<N; i++) {
        Node cur = v[i];
        if(cur.gold == before.gold &&
            cur.silver == before.silver &&
            cur.bronze == before.bronze) tie++;
        else {
            tie = 0;
            before = cur;
        }
        if(cur.num == p) {
            ans -= tie;
            break;
        } else ans++;
    }
    printf("%d\n", ans);
}