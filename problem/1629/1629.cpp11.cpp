#include <cstdio>
#define ll long long
ll a,b,c;
ll go(ll n, ll x) {
    if(!x) return 1;
    if(x&1) {
        ll t = go(n, x-1) %c;
        return n*t%c;
    } else {
        ll h = go(n, x/2) %c;
        return h*h%c;
    }
}
int main()
{
    scanf("%lld%lld%lld",&a,&b,&c);
    printf("%lld\n",go(a,b));
}
