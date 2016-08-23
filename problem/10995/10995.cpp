#include <cstdio>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i&1) printf("* ");
            else printf(" *");
        }
        puts("");
    }
}
