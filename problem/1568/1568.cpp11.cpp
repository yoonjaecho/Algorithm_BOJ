#include <cstdio>
#define ll long long
int main()
{
	ll n,cnt=0,sing=1;
	scanf("%lld",&n);

	while(n!=0) {
		if(n < sing) sing = 1;
		n -= sing++;
		cnt++;
	}
	printf("%lld\n",cnt);
}
