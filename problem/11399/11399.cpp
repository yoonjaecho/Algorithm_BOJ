#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	int n,in;
	int num,sum=0;
	priority_queue<int, vector<int>, greater<int> > pq;

	scanf("%d",&n);
	num = n;

	while(n--) {
		scanf("%d",&in);
		pq.push(in);
	}

	while(!pq.empty()) {
		sum += pq.top() * (num--);
		pq.pop();
	}
	
	printf("%d\n",sum);

}
