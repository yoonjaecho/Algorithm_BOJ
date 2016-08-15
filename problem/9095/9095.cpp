#include <cstdio>

int d[12];

int go(int n) {
	
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	if(n==3)
		return 4;
	if(d[n] > 0)
		return d[n];
	
	d[n] = go(n-1) + go(n-2) + go(n-3);

	return d[n];
}

int main() {
	int n,in;
	scanf("%d",&n);

	while(n--) {
		scanf("%d",&in);
		printf("%d\n",go(in));
	}
}

