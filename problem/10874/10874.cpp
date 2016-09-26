#include <cstdio>
int a[11];
int main()
{
    int n,in;
    scanf("%d",&n);
    for(int i=1; i<=10; i++) 
        a[i] = ((i-1) % 5) + 1;
    for(int i=1; i<=n; i++) {
        int cnt = 0;
        for(int j=1; j<=10; j++) {
            scanf("%d",&in);
            if(a[j] == in) cnt++;
        }
        if(cnt == 10) printf("%d\n",i);
    }
}
