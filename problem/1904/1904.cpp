#include <cstdio>

int d[1000001];


int main()
{
	int n;
	scanf("%d",&n);

	d[1] = 1;
	d[2] = 2;

	for(int i=3; i<=n; i++) {
		d[i] = d[i-1] + d[i-2];
		d[i] %= 15746;
	}

	printf("%d\n",d[n]);
}
