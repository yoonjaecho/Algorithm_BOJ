#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a,p;
	vector<int> v;
	int temp,sum;

	scanf("%d %d",&a,&p);

	v.push_back(a);

	while(true) {
		sum = 0;

		while(a>0) {
			temp = (a%10);
			for(int i=1; i<p; i++)
				temp *= (a%10);
			sum += temp;
			a /= 10;
		}
		for(int i=0; i<v.size(); i++) {
			if(v[i] == sum) {
				printf("%d",i);
				return 0;
			} 
		}

		v.push_back(sum);
		a = sum;
	}
	
}
