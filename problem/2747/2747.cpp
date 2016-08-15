#include <cstdio>
#define ll long long

using namespace std;


int D[10000];

int fibonacci(ll n) {
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	if(D[n] > 0) 
		return D[n];
	D[n] = fibonacci(n-1) + fibonacci(n-2);
	
	return D[n];
}

int main()
{
	ll input;

	scanf("%d",&input);

	printf("%d\n",fibonacci(input));

	return 0;
}
