#include <cstdio>
int main()
{
	int e,f,c,sum,l,cnt=0;
	scanf("%d %d %d",&e,&f,&c);
	sum = e+f;
	while(sum/c>0) {
		l = sum % c;
		cnt += sum/c;
		sum = (sum/c) + l;
	}
	printf("%d\n",cnt);
}
