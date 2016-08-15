#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int n,in,cnt=0;
	priority_queue<int> pq;

	scanf("%d",&n);

	while(n--) {
		scanf("%d",&in);
		if(!in) {
			if(pq.empty())
				printf("0\n");
			else {
				printf("%d\n",pq.top());
				pq.pop();
			}
		} else {
			pq.push(in);
		}
	}

}


