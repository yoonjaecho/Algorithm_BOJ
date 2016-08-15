#include <cstdio>
#define A 300
#define B 60
#define C 10
int main() {
    int T,a=0,b=0,c=0;
    scanf("%d",&T);
    if(T%C!=0) {
        printf("-1\n");
        return 0;
    }
    if(T>=A) {
        a = T/A;
        T -= a*A;
    }
    if(T>=B) {
        b = T/B;
        T -= b*B;
    }
    if(T>=C) c = T/C; 

    printf("%d %d %d\n",a,b,c);
}
