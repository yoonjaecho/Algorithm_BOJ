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
        int a,b,c; scanf("%d%d%d",&a,&b,&c);
        dist[a][b] = c;
    }
    for(int k=1; k<=nv; k++)
        for(int i=1; i<=nv; i++)
            for(int j=1; j<=nv; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    int ans = INF;
    for(int i=1; i<=nv; i++)
        ans = min(ans, dist[i][i]);
    printf("%d\n",ans==INF? -1:ans);
}
