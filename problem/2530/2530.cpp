#include <cstdio>
int main() {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    c += d;
    if(c >= 60) {
        b += c/60;
        c %= 60;
    }
    if(b >= 60) {
        a += b/60;
        b %= 60;
    }
    if(a >= 24)
        a %= 24;
    printf("%d %d %d\n",a,b,c); 
}
