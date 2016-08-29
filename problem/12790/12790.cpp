#include <cstdio>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int a,b,c,d,aa,bb,cc,dd;
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&aa,&bb,&cc,&dd);
        a += aa; b += bb; c += cc; d += dd;
        if(a<1) a=1;
        if(b<1) b=1;
        if(c<0) c=0;
        printf("%d\n",a+(5*b)+(2*c)+(2*d));
    }
}
