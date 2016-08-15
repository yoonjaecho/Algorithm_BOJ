#include <cstdio>

int main() {
	int A,B;
	int test_case;

	scanf("%d",&test_case);

	while(test_case--) {
		scanf("%d %d",&A,&B);
		printf("%d\n",A+B);
	}
	return 0;
}
