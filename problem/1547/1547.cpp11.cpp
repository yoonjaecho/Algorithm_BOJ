#include <cstdio>

int main()
{
	int n,a,b,in;
	scanf("%d",&n);
	in = 1;
	while(n--) {
		scanf("%d %d",&a,&b);
		if(in == a) in = b;
		else if(in == b) in = a;
	}
	printf("%d\n",in);
}

