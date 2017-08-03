#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define MAXN 100005
int n,l;
struct Dist {
    int a,b;
};
vector<Dist> v;
int main() {
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        int s,e; scanf("%d%d",&s,&e);
        if(s>e) swap(s,e);
        v.push_back({s,e});
    }
    scanf("%d",&l);
    sort(v.begin(), v.end(), [](const Dist &a, const Dist &b) {
        return a.b < b.b;
    });
    priority_queue<int, vector<int>, greater<int>> pq;
    int ans = 0;
    for(int i=0; i<n; i++) {
        pq.push(v[i].a);
        while(!pq.empty() && pq.top() < v[i].b - l) pq.pop();
        ans = max(ans, (int)pq.size());
    }
    printf("%d\n",ans);
}
