#include <cstdio>
int main() {
    int n,a,b; scanf("%d%d%d",&n,&a,&b);
    int step = 0;
    while(1) {
        step++;
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        if(a == b) {
            printf("%d\n",step);
            return 0;
        }
    }
}
