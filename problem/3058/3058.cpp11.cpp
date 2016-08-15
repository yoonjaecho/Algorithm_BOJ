#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	int test_case,in,sum;
	scanf("%d",&test_case);
	while(test_case--) {
		priority_queue<int,vector<int>,greater<int>> pq;
		sum = 0;
		for(int i=0; i<7; i++) {
			scanf("%d",&in);
			if(in%2==0) {
				sum += in;
				pq.push(in);
			}
		}
		printf("%d %d\n",sum,pq.top());
	}
}
