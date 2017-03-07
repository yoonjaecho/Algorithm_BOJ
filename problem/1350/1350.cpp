#include <cstdio>
#define ll long long
int file[1001];
int main() {
    int n; ll s,ans=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d",file+i);
    scanf("%lld",&s);
    for(int i=1; i<=n; i++) {
        ans += file[i]/s;
        file[i] %= s;
        if(file[i]) ans++;
    }
    printf("%lld\n",ans*s);
}
