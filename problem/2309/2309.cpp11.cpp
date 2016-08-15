#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int sum = 0,in;
	vector<int> v;
	for(int i=0; i<9; i++) {
		scanf("%d",&in);
		v.push_back(in);	
		sum += in;
	}
	sum -= 100;
	for(int i=0; i<9; i++) {
		if(v[i]>sum) continue;
		for(int j=i+1; j<9; j++) {
			if(v[i]+v[j] == sum) {
				v[i] = v[j] = -1;
				break;
			}
		}
	}
	sort(v.begin(),v.end());
	for(int i=2; i<=8; i++) 
		printf("%d\n",v[i]);
}
