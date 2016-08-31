#include <cstdio>
int main()
{
    int tc,a=0,b=0,x,y;
    scanf("%d",&tc);
    while(tc--) {
        scanf("%d%d",&x,&y);
        if(x==y) continue;
        if(x>y) a++;
        else b++;
    }
    printf("%d %d\n",a,b);
}
