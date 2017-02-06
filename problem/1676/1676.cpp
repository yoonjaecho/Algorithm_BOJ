#include <cstdio>
int main() {
    int n,a;
    scanf("%d",&n);
    if(!n) a=0;
    else a = n/5;
    printf("%d\n",a+n/25+n/125);
}
