#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int tc; scanf("%d",&tc);
    while(tc--){
        int n, in; scanf("%d",&n);
        priority_queue<int> max_heap;
        priority_queue<int, vector<int>, greater<int> > min_heap;
        printf("%d\n",n/2+1);
        for(int i=1; i<=n; i++) {
            scanf("%d",&in);
            if(i&1) max_heap.push(in);
            else min_heap.push(in);
            if(i > 1 && max_heap.top() > min_heap.top()) {
                int a = max_heap.top(); max_heap.pop();
                int b = min_heap.top(); min_heap.pop();
                max_heap.push(b); min_heap.push(a);
            }
            if(i&1) printf("%d ",max_heap.top());
            if(!(i%20)) puts("");
        }
        puts("");
    }
}