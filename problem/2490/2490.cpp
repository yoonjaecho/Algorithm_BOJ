#include <cstdio>
int main() {
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d) == 4) {
        int sum = a + b + c + d;
        if(sum == 0) puts("D");
        if(sum == 1) puts("C");
        if(sum == 2) puts("B");
        if(sum == 3) puts("A");
        if(sum == 4) puts("E");
    }
}
