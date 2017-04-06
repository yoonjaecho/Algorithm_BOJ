#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

#define INF 987654321
#define pi pair<int, int> 
using namespace std;

int map[1001][1001];

int main()
{
    int nv,ne,start,end;
    scanf("%d %d",&nv,&ne);

    vector<vector<pi>> vec(nv+1);
    vector<int> dist(nv+1, INF);

    for(int i=0; i<ne; i++) {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        if(map[u][v] && (map[u][v] < w))
            continue; 
        map[u][v] = w;
        vec[u].push_back(make_pair(v,w));
    }

    scanf("%d%d",&start,&end);
    dist[start] = 0;

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

    printf("%d\n",dist[end]);
}
