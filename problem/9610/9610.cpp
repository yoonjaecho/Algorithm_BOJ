#include <cstdio>
int main() {
    int a,b,c,d,e,tc;
    a = b = c = d = e = 0;
    scanf("%d",&tc);
    while(tc--) {
        int x,y;
        scanf("%d%d",&x,&y);
        if(!x || !y) e++;
        if(x > 0 && y > 0) a++;
        if(x < 0 && y > 0) b++;
        if(x < 0 && y < 0) c++;
        if(x > 0 && y < 0) d++;
    }
    printf("Q1: %d\n",a);
    printf("Q2: %d\n",b);
    printf("Q3: %d\n",c);
    printf("Q4: %d\n",d);
    printf("AXIS: %d\n",e);
}
