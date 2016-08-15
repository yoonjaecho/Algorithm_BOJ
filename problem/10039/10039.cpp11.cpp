#include <cstdio>

int main()
{
	int in,sum=0;
	for(int i=0; i<5; i++) {
		scanf("%d",&in);
		if(in < 40) in = 40;
		sum += in;
	}
	printf("%d\n",sum/5);
}
