#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	n--;
	for(int i=1; i<=n; i++) {
		
		for(int j=n-i+2; j<=n; j++)
			printf(" ");
		for(int k=i-1; k<=2*n-i+1; k++)
			printf("*");

		printf("\n");
	}

	n++;

	for(int i=1; i<=n; i++) {

		for(int j=1; j<=n-i; j++)
			printf(" ");
		for(int k=n-2*i; k<=n-2; k++)
			printf("*");

		printf("\n");
	}


	return 0;
}


