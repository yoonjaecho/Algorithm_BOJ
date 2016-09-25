#include <cstdio>
int a[101];
int main()
{
    int ans=0,p=0,n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
        if(a[i]) {
           p++;
           ans += p;
        } else p=0;
    }
    printf("%d\n",ans);
}
