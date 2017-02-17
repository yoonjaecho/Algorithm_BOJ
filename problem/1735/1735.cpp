#include <cstdio>
int gcd(int a, int b) {
    return !(a%b)? b:gcd(b,a%b);
}
int main() {
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    f = b * d;
    e = a * d + c * b;
    int g = gcd(f,e);
    printf("%d %d\n",e/g,f/g);
}
