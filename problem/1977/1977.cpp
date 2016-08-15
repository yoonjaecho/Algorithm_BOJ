#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,sum = 0;
	priority_queue<int, vector<int>, greater<int> > pq;
	vector<int> v;

	scanf("%d %d",&a,&b);

	for(int i=0; i<=100; i++)
		v.push_back(i*i);

	for(int i=a; i<=b; i++) {
		for(int j=0; j<v.size(); j++) {
			if(i == v[j]) {
				sum += i;
				pq.push(i);
			}
		}
	}

	if(sum == 0)
		printf("-1\n");
	else	
		printf("%d\n%d\n",sum,pq.top());
}
