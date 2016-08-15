#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int sum = 0;
	int m,in;

	priority_queue<int, vector<int>, greater<int> > pq;

	for(int i=0; i<7; i++) {
		scanf("%d",&in);
		if(in%2==1) {
			pq.push(in);
			sum += in;
		}
	}

	if(pq.empty())
		printf("-1\n");
	else
		printf("%d\n%d\n",sum,pq.top());
}

