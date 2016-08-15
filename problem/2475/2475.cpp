#include <cstdio>

int main()
{
	int in,sum=0;
	for(int i=0; i<5; i++) {
		scanf("%d",&in);
		sum += in * in;
	}
	printf("%d\n",sum%10);
}
