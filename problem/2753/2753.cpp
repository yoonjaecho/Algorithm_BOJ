#include <cstdio>
int main() {
    int n;
    scanf("%d",&n);
    if(n%4 == 0) {
        if(n%400 == 0) puts("1");
        else if(n%100 == 0) puts("0");
        else puts("1");
    } else puts("0");
}
