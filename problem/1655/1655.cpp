#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n; scanf("%d",&n);
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    bool turn = 1;
    while(n--) {
        int in; scanf("%d",&in);
        turn? max_heap.push(in):min_heap.push(in);
        if(!min_heap.empty() && max_heap.top() > min_heap.top()) {
            int a = max_heap.top(); max_heap.pop();
            int b = min_heap.top(); min_heap.pop();
            max_heap.push(b);
            min_heap.push(a);
        }
        turn = !turn;
        printf("%d\n",max_heap.top());
    }
}
