#include <cstdio>
#include <vector>
#include <algorithm>
#define P pair<int,int>
using namespace std;
int main()
{
    int k;
    scanf("%d",&k);
    vector<P> v;
    v.push_back(make_pair(1,0));
    for(int i=1; i<=k; i++) {
        P b = v[i-1];
        v.push_back(make_pair(b.second,b.first+b.second));
    }
    printf("%d %d\n",v[k].first,v[k].second);
}
