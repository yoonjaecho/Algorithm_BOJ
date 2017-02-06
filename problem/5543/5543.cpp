#include <cstdio>
#define MIN(a,b) (a)<(b)? (a):(b)
int main() {
    int a=2000,b=2000,in;
    for(int i=0; i<3; i++) {
        scanf("%d",&in);
        a = MIN(a,in);
    }
    for(int i=0; i<2; i++) {
        scanf("%d",&in);
        b = MIN(b,in);
    }
    printf("%d\n",a+b-50);
}
