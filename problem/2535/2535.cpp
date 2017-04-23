#include <cstdio>
struct point {
    int a,b;
} P[1001],top;
int check[1001];
int main() {
    int n,pp=1000,c=3; scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        int a,b,c; scanf("%d%d%d",&a,&b,&c);
        P[c] = {a,b};
    }
    while(c) {
        if(P[pp].a && check[P[pp].a] <= 1) {
            top = P[pp]; 
            printf("%d %d\n",top.a,top.b);
            check[P[pp].a]++;
            c--;
        } 
        pp--;
    }
}
