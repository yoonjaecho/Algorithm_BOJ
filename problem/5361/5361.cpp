#include <cstdio>
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int a,b,c,d,e; scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        printf("$%.2lf\n",a*350.34+b*230.90+c*190.55+d*125.30+e*180.90);
    }
}
