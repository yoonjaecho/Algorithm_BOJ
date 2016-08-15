#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n,ns,in;
    priority_queue<int, vector<int>, greater<int>> pq;
    scanf("%d",&n);
    ns = n*n;
    while(ns--) {
        scanf("%d",&in);
        if(pq.size() < n) {
            pq.push(in);
        } else {
            if(pq.top() <= in) {
                pq.pop();
                pq.push(in);
            }
        }
    }
    printf("%d\n",pq.top());
}

