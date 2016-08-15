#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	vector<double> v;
	priority_queue<double> pq;
	double in,max;
	double a,b,c,d;
	for(int i=0; i<4; i++) {
		scanf("%lf",&in); 
		v.push_back(in);
	}

	a = (v[0]/v[2]) + (v[1]/v[3]);
	b = (v[2]/v[3]) + (v[0]/v[1]);
	c = (v[3]/v[1]) + (v[2]/v[0]);
	d = (v[1]/v[0]) + (v[3]/v[2]);

	pq.push(a);
	pq.push(b);
	pq.push(c);
	pq.push(d);
	
	max = pq.top();

	if(max == a)
		printf("0\n");
	else if(max == b)
		printf("1\n");
	else if(max == c)
		printf("2\n");
	else if(max == d)
		printf("3\n");

}

