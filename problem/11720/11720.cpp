#include <cstdio>

int main()
{
	int N,in;
	int sum = 0;

	scanf("%d",&N);

	while(N--) {
		scanf("%1d",&in);
		sum += in;
	}

	printf("%d\n",sum);
}
