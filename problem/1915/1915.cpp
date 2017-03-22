#include <cstdio>
#include <algorithm>
using namespace std;
int a[1001][1001];
int main() {
    int n,m,ans=-1e9; scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            scanf("%1d",&a[i][j]);
            if(a[i][j]) {
                if(!a[i-1][j-1] || !a[i-1][j] || !a[i][j-1]) a[i][j] = 1;
                else a[i][j] = min(min(a[i-1][j], a[i][j-1]),a[i-1][j-1]) + 1;
            }
            ans = max(ans, a[i][j]);
        }
    }
    printf("%d\n",ans*ans);
}
