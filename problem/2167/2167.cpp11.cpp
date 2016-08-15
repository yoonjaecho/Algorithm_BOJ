#include <cstdio>
int a[301][301];
int psum[301][301];

int main()
{
    int n,m,k;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++) {
        int ps = 0;
        for(int j=1; j<=m; j++) {
            scanf("%d",&a[i][j]);
            ps += a[i][j];
            psum[i][j] = ps;
        }
    }
    
    scanf("%d",&k);
    while(k--) {
        int a,b,c,d;
        int ans = 0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(int i=c; i>=a; i--) {
            ans += psum[i][d] - psum[i][b-1];
        }
        printf("%d\n",ans);
    }
}
