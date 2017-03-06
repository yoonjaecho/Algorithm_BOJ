#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    int n,k;
    while(scanf("%d%d", &n, &k) && (n+k!=0)) {
    	k = min(k,n-k);
    	ll ans = 1;
    	for(ll r=1; r<=k; r++)
    		ans = ans * (n-r+1) / r;
    	printf("%lld\n",ans);
    }
}
