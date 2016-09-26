#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> g[100001];
int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0; i<b; i++) {
        int u,v;
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1; i<=a; i++) {
        printf("%lu\n",g[i].size());
    }
}
