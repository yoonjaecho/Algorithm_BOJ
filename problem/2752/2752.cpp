#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int> > pq;
	int in;

	while(scanf("%d",&in)==1) {
		pq.push(in);
	}

	while(!pq.empty()) {
		printf("%d\n",pq.top());
		pq.pop();
	}

}
