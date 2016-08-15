#include <cstdio>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		for(int j=n-i; j>=1; j--)
			printf(" ");
		for(int k=n-i; k<n; k++)
			printf("*");
		printf("\n");
	}


	return 0;
}

