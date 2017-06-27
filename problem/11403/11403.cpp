#include <cstdio>
#include <algorithm>
#define INF 987654321
using namespace std;
int dist[111][111];
int main() {
    int nv; scanf("%d",&nv);
    for(int i=1; i<=nv; i++) {
        for(int j=1; j<=nv; j++) {
            scanf("%d",&dist[i][j]);
            if(!dist[i][j]) dist[i][j] = INF;
        }
    }
    for(int k=1; k<=nv; k++) 
        for(int i=1; i<=nv; i++)
            for(int j=1; j<=nv; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    for(int i=1; i<=nv; i++) {
        for(int j=1; j<=nv; j++)
            printf("%d ",dist[i][j] == INF? 0:1);
        puts("");
    }
}

