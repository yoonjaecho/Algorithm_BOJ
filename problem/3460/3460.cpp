#include <cstdio>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        int pos = 0;
        while(n>0) {
            if(n&1) printf("%d ",pos);
            pos++;
            n >>= 1;
        }
        puts("");
    }
}
