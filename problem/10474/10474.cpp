#include <cstdio>
int main() {
    int a,b,q,r;
    while(scanf("%d%d",&a,&b) && a && b) {
        q = a/b;
        r = a%b;
        printf("%d %d / %d\n",q,r,b);
    }
}
