#include <cstdio>
int main() {
    int n,cnt=99,a,b,c; scanf("%d",&n);
    if(n < 100) printf("%d\n",n);
    else {
        for(int i=100; i<=n; i++) {
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;
            if(c - b == b - a) cnt++; 
        }
        printf("%d\n",cnt);
    }
}
