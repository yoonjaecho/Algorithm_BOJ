#include <cstdio>

int main()
{
	int t,n,in,sum;

	scanf("%d",&t);

	while(t--) {
		scanf("%d",&n);
		sum = 0;
		while(n--) {
			scanf("%d",&in);
			sum += in;
		}
		printf("%d\n",sum);
	}
}
