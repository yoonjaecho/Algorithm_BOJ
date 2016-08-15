#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		for(int j=n-i+1; j>1; j--)
			printf(" ");
		for(int k=2*i-1; k>=1; k--)
			printf("*");
		printf("\n");

	}


	return 0;
}


