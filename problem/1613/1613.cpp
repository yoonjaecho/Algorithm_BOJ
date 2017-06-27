#include <cstdio>
#include <algorithm>
#define INF 987654321
using namespace std;
int dist[444][444];
int main() {
    int nv,ne; scanf("%d%d",&nv,&ne);
    for(int i=1; i<=nv; i++)
        for(int j=1; j<=nv; j++)
            dist[i][j] = INF;
    for(int i=0; i<ne; i++) {
        int a,b; scanf("%d%d",&a,&b);
        dist[a][b] = 1;
    }
    for(int k=1; k<=nv; k++)
        for(int i=1; i<=nv; i++)
            for(int j=1; j<=nv; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    int nq; scanf("%d",&nq);
    while(nq--) {
        int a,b; scanf("%d%d",&a,&b);
        if(dist[a][b] == INF && dist[b][a] == INF)
            puts("0");
        else if(dist[a][b] != INF)
            puts("-1");
        else puts("1");
    }
}
