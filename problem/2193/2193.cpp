#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;

ll d[91];

int main()
{
	int n;
	scanf("%d", &n);

	d[0] = 0;
	d[1] = 1;

	for(int i=2; i<=n; i++)
		d[i] = d[i-2] + d[i-1];

	printf("%lld",d[n]);
}
