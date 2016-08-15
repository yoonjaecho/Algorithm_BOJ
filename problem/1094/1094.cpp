#include <cstdio>

int main()
{
	int n,sum=0;
	scanf("%d",&n);

	for(int i=0; i<=6; i++) {
		if(n&0x1 == 0x1)
			sum++;
		n >>= 1;
	}
	printf("%d",sum);
}

