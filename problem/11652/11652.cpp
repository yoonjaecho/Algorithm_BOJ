#include <cstdio>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    int N; scanf("%d",&N);
    vector<ll> v;
    while(N--) {
        ll in; scanf("%lld",&in);
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    ll ans = v[0], MAX = 1, cnt = 1;
    for(int i=1; i<v.size(); i++) {
        if(v[i] == v[i-1]) cnt++;
        else cnt = 1;
        if(MAX < cnt) {
            MAX = cnt;
            ans = v[i];
        }
    }
    printf("%lld\n",ans);
}
