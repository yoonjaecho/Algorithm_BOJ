#include <cstdio>

int main()
{
	int n,in;
	int c=0,nc=0;

	scanf("%d",&n);
	while(n--) {
		scanf("%d",&in);
		if(in) c++;
		else nc++;
	}
	if(c>nc) printf("Junhee is cute!\n");
	else printf("Junhee is not cute!\n");
}
