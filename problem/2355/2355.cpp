#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
	ll a,b,sum;
	scanf("%lld %lld",&a,&b);
	if(a>b) swap(a,b);
	sum = (a+b) * (b-a+1) / 2;
	printf("%lld\n",sum);
}

