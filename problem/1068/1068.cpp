#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool check[51];
int p[51];
vector<int> v[51];
int main()
{
    int n,in,del,ans=0;
    scanf("%d",&n);
    memset(check,1,sizeof(check));
    for(int i=0; i<n; i++) {
        scanf("%d",&in);
        p[i] = in;
        if(in == -1) continue;
        v[in].push_back(i);
    }
    scanf("%d",&del);
    queue<int> q;
    q.push(del);
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        check[cur] = 0;
        if(p[cur] != -1)
            v[p[cur]].erase(v[p[cur]].begin());
        for(int i=0; i<v[cur].size(); i++)
            q.push(v[cur][i]);
    }
    for(int i=0; i<n; i++) 
        if(v[i].empty() && check[i]) 
            ans++;
    printf("%d\n",ans);
}
