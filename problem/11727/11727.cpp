#include <cstdio>

int d[1001];

int go(int n) {
	
	if(n==1)
		return 1;
	if(n==2)
		return 3;
	if(d[n] > 0)
		return d[n];

	d[n] = go(n-1) + 2*go(n-2);

	d[n] %= 10007;
	return d[n];
}

int main() {

	int n;
	scanf("%d",&n);
	printf("%d\n",go(n));
}

