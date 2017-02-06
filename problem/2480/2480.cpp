#include <cstdio>
#define MAX(a,b) (a)>(b)?(a):(b)
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c) 
        printf("%d\n",10000+a*1000);
    else if(a==b) 
        printf("%d\n",1000+a*100);
    else if(b==c)
        printf("%d\n",1000+b*100);
    else if(c==a)
        printf("%d\n",1000+a*100);
    else {
        int max = MAX(a,MAX(b,c));
        printf("%d\n",max*100);
    }
}
