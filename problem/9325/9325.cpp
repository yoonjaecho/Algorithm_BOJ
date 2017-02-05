#include <cstdio>
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int p,op;
        scanf("%d%d",&p,&op);
        while(op--) {
            int a,b;
            scanf("%d%d",&a,&b);
            p += a*b;
        }
        printf("%d\n",p);
    }
}
