#include <cstdio>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	if(90 <= n && n <= 100)
		printf("A\n");
	else if(80 <= n && n <= 89)
		printf("B\n");
	else if(70 <= n && n <= 79)
		printf("C\n");
	else if(60 <= n && n <= 69)
		printf("D\n");
	else
		printf("F\n");
	


	return 0;
}

