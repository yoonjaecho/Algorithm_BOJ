#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

vector<int> a[101];
bool check[101];
int step[101];

void dfs(int node,int nStep) {
    check[node] = true;
    step[node] = nStep;
    for(int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        if(check[next] == false || step[next] > nStep)
            dfs(next,nStep+1);
    }
}

int main()
{
    int n,m;
    int minStep=987654321,ans=0;
    scanf("%d %d",&n,&m);

    for(int i=0; i<m; i++) {
        int u,v;
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }

    for(int i=1; i<=n; i++) {
        memset(check,false,sizeof(check));    
        memset(step,0,sizeof(step));
        dfs(i,0);
        int sum = 0;
        for(int j=1; j<=n; j++) {
            if(j!=i) sum += step[j]; 
        }
        if(minStep > sum) {
            minStep = sum;
            ans = i;
        }
    }
    printf("%d\n",ans);


}
