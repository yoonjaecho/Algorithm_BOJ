#include <cstdio>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	int test_case,n;
	int in,x,y,temp,res;

	scanf("%d",&test_case);

	while(test_case--) {
		priority_queue<int, vector<int>, greater<int> > pq;
		deque<int> dq;

		scanf("%d",&n);
		for(int i=0; i<n; i++) {
			scanf("%d",&in);
			pq.push(in);
		}

		while(!pq.empty()) {
			in = pq.top();
			dq.push_front(in);
			pq.pop();

			if(pq.empty())
				break;

			in = pq.top();
			dq.push_back(in);
			pq.pop();
		}

		res = 0;
		temp = dq.front();

		while(!dq.empty()) {
			x = dq.front();
			dq.pop_front();
			if(dq.empty())
				y = temp;
			else
				y = dq.front();
			res = max(res,abs(x-y));
		}

		printf("%d\n",res);
	}
}

