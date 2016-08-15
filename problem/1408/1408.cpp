#include <cstdio>
#include <algorithm>

using namespace std;

int a[3];
int b[3];
int c[3];

int main()
{
	int asum,bsum,csum;

	scanf("%d:%d:%d",&a[0],&a[1],&a[2]);
	scanf("%d:%d:%d",&b[0],&b[1],&b[2]);

	asum = a[0]*3600 + a[1]*60 + a[2];
	bsum = b[0]*3600 + b[1]*60 + b[2];

	if(asum>bsum) {
		swap(asum,bsum);
		csum = 24 * 3600 - (bsum - asum);
	}
	else
		csum = bsum - asum;

	c[0] = csum/3600;
	csum %= 3600;

	c[1] = csum/60;
	csum %= 60;

	c[2] = csum;
	

	printf("%02d:%02d:%02d\n",c[0],c[1],c[2]);
}	
	
