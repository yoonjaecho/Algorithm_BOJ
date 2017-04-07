#include <cstdio>
const int SIZE = 10000000;
int a[2*SIZE+1];
int main() {
    int n,m,in; scanf("%d",&n);
    while(n--) {
        scanf("%d",&in);
        if(in < 0) {
            in = -in;
            in += SIZE;
        }
        a[in]++;
    }
    scanf("%d",&m);
    while(m--) {
        scanf("%d",&in);
        if(in < 0) {
            in = -in;
            in += SIZE;
        }
        printf("%d ",a[in]);
    }
}
