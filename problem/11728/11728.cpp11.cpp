#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int m,n,l,in;
	priority_queue<int, vector<int>, greater<int>> pq;

	scanf("%d %d",&m,&n);
	l = m+n;

	while(l--) {
		scanf("%d",&in);
		pq.push(in);
	}

	while(!pq.empty()) {
		printf("%d ",pq.top());
		pq.pop();
	}
}
