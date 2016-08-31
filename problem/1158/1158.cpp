#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n,m,idx=0;
    queue<int> q;
    scanf("%d%d",&n,&m);
    printf("<");
    for(int i=1; i<=n; i++) q.push(i);
    while(!q.empty()) {
        for(int i=0; i<m-1; i++) {
            int f = q.front();
            q.pop(); q.push(f);
        }
        idx++;
        if(idx==n) printf("%d",q.front());
        else printf("%d, ",q.front());
        q.pop();
    }
    printf(">");
}
