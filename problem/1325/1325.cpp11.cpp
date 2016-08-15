#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std; 
vector<int> a[10001];
bool check[10001];
int cnt;

void dfs(int node) {
    check[node] = true;
    cnt++;
    for(int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        if(check[next] == false)
            dfs(next);
    }
}

int main()
{
    int n,m;
    int max = 0;
    vector<int> res;
    scanf("%d %d",&n,&m);

    for(int i=0; i<m; i++) {
        int u,v;
        scanf("%d %d",&u,&v);
        a[v].push_back(u);
    }

    for(int i=1; i<=n; i++) {
        memset(check,0,sizeof(check));
        cnt = 0;
        dfs(i);
        if(max < cnt) {
            max = cnt;
            res.clear();
            res.push_back(i);
        } else if(max == cnt) 
            res.push_back(i);
    }

    for(int i=0; i<res.size(); i++)
        printf("%d ",res[i]);
}
