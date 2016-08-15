#include <cstdio>
int main()
{
    int ans=0,in;
    for(int i=0; i<4; i++) {
        scanf("%d",&in);
        ans += in;
    }
    printf("%d\n%d\n",ans/60,ans%60);
}