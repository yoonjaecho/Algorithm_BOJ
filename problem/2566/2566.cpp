#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int in,pos,res=0;
	for(int i=0; i<81; i++) {
		scanf("%d",&in);
		if(res <= in) {
			res = in;
			pos = i;
		}
	}
	printf("%d\n",res);
	printf("%d %d\n",(pos/9)+1,pos%9+1);
}
