#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int n,sum;
	vector<int> v;

	scanf("%d",&n);
	v.push_back(n);

	while(true) {
		sum = n/10 + n%10;
		sum = 10 * (n%10) + sum%10;
		for(int i=0; i<v.size(); i++) {
			if(v[i] == sum) {
				printf("%d\n",v.size());
				return 0;
			}
		}
		v.push_back(sum);
		n = sum;
	}
}
