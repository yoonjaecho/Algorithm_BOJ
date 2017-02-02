#include <cstdio>
int gcd(int a, int b) {
    return !(a%b)? b:gcd(b,a%b);
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",a*b/gcd(a,b));
    }
}
