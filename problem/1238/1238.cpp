#include <cstdio>
#include <algorithm>
#define INF 987654321
using namespace std;
int dist[1111][1111];
int main() {
    int nv,ne,x; scanf("%d%d%d",&nv,&ne,&x);
    for(int i=1; i<=nv; i++)
        for(int j=1; j<=nv; j++)
            dist[i][j] = i==j? 0:INF;
    for(int i=0; i<ne; i++) {
        int a,b,c; scanf("%d%d%d",&a,&b,&c);
        dist[a][b] = min(dist[a][b],c);
    }
    for(int k=1; k<=nv; k++)
        for(int i=1; i<=nv; i++)
            for(int j=1; j<=nv; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    int ans = -1;
    for(int i=1; i<=nv; i++)
        ans = max(ans, dist[i][x] + dist[x][i]);
    printf("%d\n",ans);
}
