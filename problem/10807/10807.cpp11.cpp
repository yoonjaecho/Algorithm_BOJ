#include <cstdio>
int a[201];
int main()
{
    int n,in,ans;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&in);
        a[in+100]++;
    }
    scanf("%d",&ans);
    printf("%d\n",a[ans+100]);
}
