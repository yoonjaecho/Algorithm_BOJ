#include <cstdio>
int gcd(int a,int b) {
   return !(a%b)? b:gcd(b,a%b);
}
int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n%d\n",gcd(m,n),m*n/gcd(m,n));
}
