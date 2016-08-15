#include <cstdio>
using namespace std;
int a[31];
int main()
{
	for(int i=1; i<=30; i++) {
		int in;
		scanf("%d",&in);
		a[in] = 1;
	}
	for(int i=1; i<=30; i++) 
		if(!a[i]) printf("%d\n",i);
}
