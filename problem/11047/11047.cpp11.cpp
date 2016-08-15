#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
	int n,k,in,cnt=0;
	priority_queue<int> pq;
	scanf("%d %d",&n,&k);

	while(n--) {
		scanf("%d",&in);
		if(in <= k) pq.push(in);
		else break;
	}

	while(k != 0) {
		while(k < pq.top()) pq.pop();
		k -= pq.top();
		cnt++;
	}
	printf("%d\n",cnt);
}

