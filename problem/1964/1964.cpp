#include <cstdio>
int main()
{
    int n,itv=4,ans=5;
    scanf("%d",&n);
    for(int i=1; i<n; i++) {
        itv += 3;
        ans += itv;
        ans %= 45678;
    }
    printf("%d\n",ans);
}

