#include <cstdio>
#define ll long long

int main()
{
	int n;
	ll in,sum=0;

	scanf("%d",&n);
	while(n--) {
		scanf("%lld",&in);
		if(n==0) {
			sum += in;
			printf("%lld\n",sum);
			return 0;
		}
		sum += in-1;
	}
}
