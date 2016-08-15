#include <cstdio>
#include <algorithm>
using namespace std;
int a[8];
int main()
{
	int maxcnt,cnt;
	for(int i=0; i<3; i++) {
		maxcnt = cnt = 1;
		for(int j=0; j<8; j++)
			scanf("%1d",&a[j]);
		for(int j=1; j<8; j++) {
			if(a[j-1] == a[j]) cnt++;
			else cnt = 1;
			maxcnt = max(maxcnt,cnt);
		}
		printf("%d\n",maxcnt);
	}
}
