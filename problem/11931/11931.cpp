#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int n,in;
	priority_queue<int> pq;

	scanf("%d",&n);
	while(n--) {
		scanf("%d",&in);
		pq.push(in);
	}

	while(!pq.empty()) {
		printf("%d\n",pq.top());
		pq.pop();
	}
}
