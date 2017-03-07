#include <cstdio>
#include <cmath>
#define ll long long
int main() {
    ll n,ans=0; scanf("%lld",&n);
    for(int i=1; i<=n; i++,ans++)
        n -= i;
    printf("%llu\n",ans);
}
