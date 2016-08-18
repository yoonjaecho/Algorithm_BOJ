#include <cstdio>
int a[2];
int b[2];
int main()
{
    scanf("%d%d%d%d",a,a+1,b,b+1);
    while(1) {
        a[1] -= b[0];
        b[1] -= a[0];
        if(a[1] <= 0 && b[1] <= 0) {
            puts("DRAW");
            break;
        } else if(a[1] <= 0) {
            puts("PLAYER B");
            break;
        } else if(b[1] <= 0) {
            puts("PLAYER A");
            break;
        }
    }
}
