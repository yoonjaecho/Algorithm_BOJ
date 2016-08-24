#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    priority_queue<int> pq;
    int cur = 0;
    for(int i=0; i<4; i++) {
        int a,b;
        scanf("%d%d",&a,&b);
        cur -= a;
        cur += b;
        pq.push(cur);
    }
    printf("%d\n",pq.top());
}
