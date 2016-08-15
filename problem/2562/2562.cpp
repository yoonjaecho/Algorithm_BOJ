#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int in,pos,res=0;
	for(int i=0; i<9; i++) {
		scanf("%d",&in);
		if(res <= in) {
			res = in;
			pos = i;
		}
	}
	printf("%d\n%d",res,pos+1);
}
