#include <cstdio>
#define ll long long
ll gcd(ll a,ll b) {
   return !(a%b)? b:gcd(b,a%b);
}
int main() {
    int n;
    scanf("%d",&n);
    while(n--) {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",a*b/gcd(a,b));
    }
}
