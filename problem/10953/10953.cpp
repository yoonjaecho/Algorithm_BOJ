#include <cstdio>
#include <stdlib.h>

int main() {
	char input[100];
	int test_case;

	scanf("%d",&test_case);
	while(test_case--) {
		scanf("%s",input);
		int a = atoi(&input[0]);
		int b = atoi(&input[2]);
		printf("%d\n",a+b);
	}

	return 0;
}
