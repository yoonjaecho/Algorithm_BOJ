#include <cstdio>

int main()
{
    int n;
    scanf("%d",&n);
    while(n) {
        int t,b=-1;
        for(int i=0; i<n; i++) {
            scanf("%d",&t);
            if(t==b) continue;
            b = t;
            printf("%d ",t);
        }
        puts("$");
        scanf("%d",&n);
    }
}
