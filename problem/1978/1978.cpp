#include <cstdio>

int main() {
	
	int n,in;
	int cnt = 0;
	bool isPrime;

	scanf("%d",&n);

	while(n--) {
		isPrime = true;
		scanf("%d",&in);
		if(in == 1)
			continue;
		for(int i=2; i<in; i++) {
			if(in % i == 0) {
				isPrime = false;
				break;
			}
		}

		if(isPrime)
			cnt++;
	}

	printf("%d\n",cnt);
}
