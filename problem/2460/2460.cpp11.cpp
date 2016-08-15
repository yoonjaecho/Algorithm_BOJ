#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> pq;
	int in,out,sum=0;
	for(int i=0; i<10; i++) {
		scanf("%d %d",&out,&in);
		sum = sum - out + in;
		pq.push(sum);
	}
	printf("%d\n",pq.top());
}
