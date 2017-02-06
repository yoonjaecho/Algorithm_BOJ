#include <cstdio>
int main() {
    int t; scanf("%d",&t);
    while(t--) {
        int a=0,b=0,c,d;
        for(int i=0; i<9; i++) {
            scanf("%d%d",&c,&d);
            a += c; b += d;
        }
        if(a>b) puts("Yonsei");
        else if(a<b) puts("Korea");
        else puts("Draw");
    }
}
