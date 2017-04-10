#include <cstdio>
#define ll long long
#define MOD 1000000007
ll a[1001][1001];
int dx[3] = {1,0,1};
int dy[3] = {0,1,1};
int main() {
    int n,m; scanf("%d%d",&n,&m);
    a[1][1] = 1LL;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            for(int k=0; k<3; k++) {
                int ny = i + dy[k];
                int nx = j + dx[k];
                if(1 <= ny && ny <= n && 1 <= nx && nx <= m) {
                    a[ny][nx] += a[i][j];
                    a[ny][nx] %= MOD;
                }
            }
        }
    }
    printf("%lld\n",a[n][m]);
}
