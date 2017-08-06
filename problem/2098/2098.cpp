#include <cstdio>
#include <cstring>
#include <algorithm>
#define IMPOSSIBLE 987654321
using namespace std;
int n, w[16][16], dp[16][1<<16];
int tsp(int here, int visited) {
    int &ret = dp[here][visited];
    if(ret != -1) return ret;
    if(visited == (1<<n)-1) 
        return w[here][0]? w[here][0]:IMPOSSIBLE;
    ret = IMPOSSIBLE;
    for(int i=0; i<n; i++) {
        if(visited & (1<<i) || !w[here][i])
            continue;
        ret = min(ret, w[here][i] + tsp(i, visited | (1<<i)));
    }
    return ret;
}
int main() {
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&w[i][j]);
    memset(dp, -1, sizeof(dp));
    printf("%d\n", tsp(0,1));
}
