#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	n--;
	for(int i=1; i<=n; i++) {
		
		for(int j=n-i+1; j<=n; j++)
			printf("*");
		for(int k=i; k<=2*n-i+1; k++)
			printf(" ");
		for(int j=n-i+1; j<=n; j++)
			printf("*");

		printf("\n");
	}

	n++;

	for(int i=1; i<=n; i++) {

		for(int j=1; j<=n-i+1; j++)
			printf("*");
		for(int k=n-2*i+1; k<=n-2; k++)
			printf(" ");
		for(int j=1; j<=n-i+1; j++)
			printf("*");

		printf("\n");

	}


	return 0;
}


