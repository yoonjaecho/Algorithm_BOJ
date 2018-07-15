#include <cstdio>
#include <queue>
#include <vector>
#define ll long long
using namespace std;
int N, M; ll ans;
priority_queue<ll, vector<ll>, greater<ll>> pq;
int main() {
    scanf("%d%d", &N, &M);
    for(int i=0; i<N; i++) {
        ll in; scanf("%lld", &in);
        pq.push(in);
    }
    while(M--) {
        ll a = pq.top(); pq.pop();
        ll b = pq.top(); pq.pop();
        pq.push(a + b); pq.push(a + b);
    }
    while(!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }
    printf("%lld\n", ans);
}