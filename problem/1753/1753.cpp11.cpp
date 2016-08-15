#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

#define INF 987654321
#define pi pair<int, int>

using namespace std;

int main()
{
    int nv,ne,start;
    scanf("%d %d %d",&nv,&ne,&start);
    start--;

    vector<vector<pi>> vec(nv);
    vector<int> dist(nv, INF);
    dist[start] = 0;

    for(int i=0; i<ne; i++) {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        u--, v--;
        vec[u].push_back(make_pair(v,w));
    }

    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push(make_pair(0,start));

    while(!pq.empty()) {
        int here = pq.top().second;
        int cost = pq.top().first;
        pq.pop();

        for(auto &x : vec[here]) {
            if(dist[x.first] > dist[here] + x.second) {
                dist[x.first] = dist[here] + x.second;
                pq.push(make_pair(dist[x.first], x.first));
            }
        }
    }

    for(int i=0; i<nv; i++) {
        if(dist[i] != INF) printf("%d\n",dist[i]);
        else puts("INF");
    }
}
