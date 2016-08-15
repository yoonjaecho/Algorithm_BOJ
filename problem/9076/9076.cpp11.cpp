#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int test_case,in;
	scanf("%d",&test_case);
	while(test_case--) {
		vector<int> v;
		for(int i=0; i<5; i++) {
			scanf("%d",&in);
			v.push_back(in);
		}
		sort(v.begin(),v.end());
		if(abs(v[1]-v[3]) >= 4)
			printf("KIN\n");
		else
			printf("%d\n",v[1]+v[2]+v[3]);
	}
}

