#include <cstdio>
int get_pisano_period(int m) {
    int a=1,b=1,p=0;
    do {
        int temp = a;
        a = b;
        b = (temp + a) % m;
        p++;
    } while(!(a==1 && b==1));
    return p;
}
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int n,m; scanf("%d%d",&n,&m);
        printf("%d %d\n",n,get_pisano_period(m));
    }
}
