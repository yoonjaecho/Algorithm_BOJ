#include <cstdio>
#include <algorithm>
#define INF 987654321
using namespace std;
int dist[111][111];
int main() {
    int nv,ne; scanf("%d%d",&nv,&ne);
    for(int i=1; i<=nv; i++)
        for(int j=1; j<=nv; j++)
            dist[i][j] = i==j? 0:INF;
    for(int i=0; i<ne; i++) {
        int a,b,c; scanf("%d%d%d",&a,&b,&c);
        dist[a][b] = min(dist[a][b], c);
    }
    for(int k=1; k<=nv; k++)
        for(int i=1; i<=nv; i++)
            for(int j=1; j<=nv; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    for(int i=1; i<=nv; i++) {
        for(int j=1; j<=nv; j++) 
            printf("%d ",dist[i][j]);
        puts("");
    }
}
