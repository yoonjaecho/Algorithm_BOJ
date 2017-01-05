#include <cstdio>
int main() {
    int a,b,v,n;
    scanf("%d%d%d",&a,&b,&v);
    n = (v-a)/(a-b);
    n = (v-a)%(a-b)? n+2:n+1;
    printf("%d",n);
}
