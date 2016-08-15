#include <cstdio>
#define ll long long

ll fact(ll n) {
	if(n==0 || n==1)
		return 1;
	else
		return n*fact(n-1);
}

int main()
{
	ll n;
	scanf("%llu",&n);
	printf("%llu\n",fact(n));
}
