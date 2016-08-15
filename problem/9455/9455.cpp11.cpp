#include <cstdio>
#include <cstring>
int a[101][101];
int cnt[101];
int total[101];
int check[101];
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int m,n;
        scanf("%d %d",&m,&n);
        memset(a,0,sizeof(a));
        memset(cnt,0,sizeof(cnt));
        memset(total,0,sizeof(total));
        memset(check,0,sizeof(check));
        int ans = 0;
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                scanf("%d",&a[i][j]);
                if(a[i][j]) {
                    total[j] += ++cnt[j];
                    check[j] += m-i+1;
                }
            }
        }
        for(int i=1; i<=n; i++)
            ans += check[i] - total[i];
        printf("%d\n",ans);
    }
}
