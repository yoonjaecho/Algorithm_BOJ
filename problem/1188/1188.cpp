#include <cstdio>
int gcd(int a,int b) {
    return (!b)? a:gcd(b,a%b);
}
int main() {
    int n,m; scanf("%d%d",&n,&m);
    printf("%d\n",m-gcd(n,m));
}
