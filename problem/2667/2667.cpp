#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int town[26][26];
bool check[26][26];
vector<int> ans;
int curTown,n,cnt=0;
void dfs(int y, int x) {
    check[y][x] = true;
    if(town[y][x]) {
        cnt++;
        curTown++;
        if(1<=y-1 && !check[y-1][x]) dfs(y-1,x);
        if(1<=x-1 && !check[y][x-1]) dfs(y,x-1);
        if(y+1<=n && !check[y+1][x]) dfs(y+1,x);
        if(x+1<=n && !check[y][x+1]) dfs(y,x+1);
    }
}
int main() {
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%1d",&town[i][j]);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            curTown = 0;
            if(check[i][j]) continue;
            if(cnt == n*n) goto Land;
            dfs(i,j);
            if(curTown) ans.push_back(curTown);
        }
    }
Land:
    sort(ans.begin(), ans.end());
    printf("%lu\n",ans.size());
    for(int i=0; i<ans.size(); i++)
        printf("%d\n",ans[i]);
}
