#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int wsum = 0,ksum = 0,in;
	priority_queue<int> wpq,kpq;
	
	for(int i=0; i<10; i++) {
		scanf("%d",&in);
		wpq.push(in);
	}
	
	for(int i=0; i<10; i++) {
		scanf("%d",&in);
		kpq.push(in);
	}

	for(int i=0; i<3; i++) {
		wsum += wpq.top(); wpq.pop();	
		ksum += kpq.top(); kpq.pop();	
	}

	printf("%d\n%d\n",wsum,ksum);

}
