#include <cstdio>
int main()
{
    int n,in;
    scanf("%d",&n);
    while(1) {
        scanf("%d",&in);
        if(!in) break;
        if(!(in%n)) printf("%d is a multiple of %d.\n",in,n);
        else printf("%d is NOT a multiple of %d.\n",in,n);
    }
}
