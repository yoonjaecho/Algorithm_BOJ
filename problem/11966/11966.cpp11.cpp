#include <cstdio>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=n; i>0; i>>=1) if(i&1) cnt++;
    if(cnt==1) printf("1\n");
    else printf("0\n");
}
