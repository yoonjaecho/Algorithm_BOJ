#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int as=0,bs=0,in;
	for(int i=0; i<4; i++) {
		scanf("%d",&in);
		as += in;
	}
	for(int i=0; i<4; i++) {
		scanf("%d",&in);
		bs += in;
	}
	printf("%d\n",max(as,bs));

}
