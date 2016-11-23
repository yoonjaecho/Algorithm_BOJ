#include <cstdio>
#define ll long long
ll a[100002],psum[100002],ans;
int n;
int main() {
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%lld",a+i);
    for(int i=n; i>=2; i--)
        psum[i] = psum[i+1] + a[i];
    for(int i=1; i<n; i++) 
        ans += a[i] * psum[i+1];
    printf("%lld\n",ans); 
}
