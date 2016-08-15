#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int n,temp;
	queue<int> q;

	scanf("%d",&n);

	for(int i=1; i<=n; i++)
		q.push(i);

	while(q.size() != 1) {
		printf("%d ",q.front());
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);
	}
	printf("%d",q.front());
}
