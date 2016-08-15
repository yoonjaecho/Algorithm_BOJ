#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int> > pq;
	int n,in;
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
