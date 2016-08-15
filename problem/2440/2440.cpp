#include <cstdio>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		for(int j=n-i+1; j>=1; j--)
			printf("*");
		printf("\n");
	}


	return 0;
}

