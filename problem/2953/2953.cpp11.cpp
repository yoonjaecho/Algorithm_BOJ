#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int in,sum,idx,maxSum=0;
	for(int i=1; i<=5; i++) {
		sum = 0;
		for(int j=0; j<4; j++) {
			scanf("%d",&in);
			sum += in;
			if(maxSum <= sum) {
				idx = i;
				maxSum = sum;
			}
		}
	}
	printf("%d %d\n",idx,maxSum);
}
