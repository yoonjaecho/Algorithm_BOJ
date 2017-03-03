#include <cstdio>
#include <algorithm>
using namespace std;
int g[51];
int main() {
    int tc,n,in; scanf("%d",&tc);
    for(int i=1; i<=tc; i++) {
        int gap = 0;
        scanf("%d",&n);
        for(int j=1; j<=n; j++)
            scanf("%d",g+j);
        sort(g,g+1+n);
        for(int j=2; j<=n; j++)
            gap = max(gap,g[j]-g[j-1]);
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n",i,g[n],g[1],gap);
    }
}
