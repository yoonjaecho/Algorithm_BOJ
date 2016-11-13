#include <cstdio>
#include <cstring>
#define ll long long 
ll a[36];
ll t(int n) {
    if(a[n] != -1) return a[n];
    ll sum = 0;
    for(int i=0; i<=n-1; i++) {
        sum += t(i) * t(n-1-i);
        a[n] = sum;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    memset(a,-1,sizeof(a));
    a[0] = 1;
    printf("%lld\n",t(n));
}
