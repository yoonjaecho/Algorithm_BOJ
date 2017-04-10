#include <cstdio>
#define ll long long 
ll a[117];
ll foo(int n) {
    ll &ret = a[n];
    if(ret) return ret;
    return ret = foo(n-1) + foo(n-3);
}
int main() {
    int n; scanf("%d",&n);
    a[1] = a[2] = a[3] = 1LL;
    printf("%lld\n",foo(n));
}
