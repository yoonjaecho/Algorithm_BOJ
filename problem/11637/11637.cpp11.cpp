#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int test_case,n;
	scanf("%d",&test_case);
	while(test_case--) {
		int in,sum=0,max=0,maxcnt=0,maxidx;
		scanf("%d",&n);
		for(int i=1; i<=n; i++) {
			scanf("%d",&in);
			sum += in;
			if(max < in) {
				max = in;
				maxcnt = 1;
				maxidx = i;
			} else if(max == in) 
				maxcnt++;
		}
		if(maxcnt > 1) {
			printf("no winner\n");
			continue;
		}
		if(sum/2 < max) printf("majority winner %d\n",maxidx);
		else printf("minority winner %d\n",maxidx);
	}
}
