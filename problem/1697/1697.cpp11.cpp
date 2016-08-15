#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int d[100001];
int main()
{
    int n,k;
    int ans = 987654321;
    queue<pair<int,int>> q;
    scanf("%d%d",&n,&k);
    q.push(make_pair(n,0));
    while(!q.empty()) {
        pair<int,int> cur = q.front(); q.pop();
        if(cur.first < -1) continue;
        if(cur.first > 100000) continue;
        if(d[cur.first]) continue;
        d[cur.first] = 1;
        if(cur.first == k) {
            d[k] = cur.second;
            break;
        }
        q.push(make_pair(cur.first+1,cur.second+1));
        q.push(make_pair(cur.first-1,cur.second+1));
        q.push(make_pair(cur.first*2,cur.second+1));
    }
    printf("%d\n",d[k]);
}
