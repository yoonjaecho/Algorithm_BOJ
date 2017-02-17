#include <cstdio>
int main() {
    int a,b;
    while(scanf("%d%d",&a,&b) && a && b) {
        if(a>b) {
            if(!(a%b)) puts("multiple");
            else puts("neither");
        } else if(a<b) {
            if(!(b%a)) puts("factor");
            else puts("neither");
        }
    }
}
