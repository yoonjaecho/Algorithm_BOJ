#include <cstdio>
#define ll long long 
ll p[101];

int main()
{
    int n,m;
    p[1] = p[2] = p[3] = 1;
    scanf("%d",&n);
    for(int t=0; t<n; t++) {
        scanf("%d",&m);
        for(int i=4; i<=m; i++) {
            if(p[i] > 0) continue;
            p[i] = p[i-2] + p[i-3];
        }
        printf("%lld\n",p[m]);
    }
}
