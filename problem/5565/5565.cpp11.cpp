#include <cstdio>
int main()
{
	int in,sum;
	scanf("%d",&sum);
	for(int i=0; i<9; i++) {
		scanf("%d",&in);
		sum -= in;
	}
	printf("%d\n",sum);
}

