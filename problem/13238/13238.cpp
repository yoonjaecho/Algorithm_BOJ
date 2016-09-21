#include <cstdio>
#define MAX(a,b) (a)>(b)? (a):(b)
int a[10001];
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<=n; i++) 
        for(int j=i; j<=n; j++) 
            ans = MAX(ans, a[j] - a[i]); 
    printf("%d\n",ans);
}
