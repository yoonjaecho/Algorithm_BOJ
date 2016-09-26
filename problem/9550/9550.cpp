#include <cstdio>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int n,k,in,ans=0;
        scanf("%d%d",&n,&k);
        while(n--) {
            scanf("%d",&in);
            ans += in / k; 
        }
        printf("%d\n",ans);
    }
}
