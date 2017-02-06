#include <cstdio>
#define MAX(a,b) (a)>(b)?(a):(b)
int main() {
    int a,b,c,n,ans=0;
    scanf("%d",&n);
    while(n--) {
        scanf("%d%d%d",&a,&b,&c);
        int max;
        if(a==b && b==c) 
            max = 10000+a*1000;
        else if(a==b) 
            max = 1000+a*100;
        else if(b==c)
            max = 1000+b*100;
        else if(c==a)
            max = 1000+a*100;
        else 
            max = MAX(a,MAX(b,c))*100;
        ans = MAX(ans,max);
    }
    printf("%d\n",ans);
}
