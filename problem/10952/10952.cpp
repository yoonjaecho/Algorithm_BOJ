#include <cstdio>

int main() {
	int A,B;

	while(scanf("%d %d",&A,&B) == 2) {
		if(A == 0 && B == 0)
			break;
		printf("%d\n",A+B);
	}

	return 0;
}
