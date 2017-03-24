#include <cstdio>
int gcd(int a, int b) {
    return (!b)? a:gcd(b,a%b);
}
int main() {
    int n,f,in,g; scanf("%d%d",&n,&f);
    n--;
    while(n--) {
        scanf("%d",&in);
        g = gcd(f,in);
        printf("%d/%d\n",f/g,in/g);
    }
}
