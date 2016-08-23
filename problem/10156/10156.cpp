#include <cstdio>
int main()
{
    int k,n,m,ans;
    scanf("%d%d%d",&k,&m,&n);
    ans = k*m - n;
    if(ans<0) puts("0");
    else printf("%d\n",ans);
}
