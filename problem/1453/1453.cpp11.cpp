#include <cstdio>
int a[101];
int main()
{
    int p,in,ans=0;
    scanf("%d",&p);
    while(p--) {
        scanf("%d",&in);
        if(!a[in]) a[in]++;
        else ans++;
    }
    printf("%d\n",ans);
}
