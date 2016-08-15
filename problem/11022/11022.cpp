#include <cstdio>

int main() {
	int T;
	int test_case;
	int A,B;

	scanf("%d",&T);
	for(test_case = 1; test_case <= T; test_case++) {
		scanf("%d %d",&A,&B);

		printf("Case #%d: %d + %d = %d\n",test_case, A, B, A+B);
	}

	return 0;
}
