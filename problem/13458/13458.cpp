#include <cstdio>
#define ll long long
int a[1000001];
int main() {
    int n,b,c; scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d",a+i);
    ll ans = n;
    scanf("%d%d",&b,&c);
    for(int i=1; i<=n; i++) {
        a[i] -= b;
        if(a[i] < 0) continue;
        ans += a[i]/c;
        ans += a[i]%c? 1:0;
    }
    printf("%lld\n",ans);
}
