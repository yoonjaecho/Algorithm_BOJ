#include <cstdio>
#include <algorithm>

using namespace std;

int tri[500][500];
int d[500][500];
int n;

int solve(int x,int y) {
	if(y >= n)
		return 0;
	int& ret = d[y][x];
	if(ret != 0)
		return ret;
	ret = max(solve(x,y+1),solve(x+1,y+1)) + tri[y][x];
	return ret;
}

int main()
{
	scanf("%d",&n);

	for(int i=0; i<n; i++) {
		for(int j=0; j<=i; j++) {
			scanf("%d",&tri[i][j]);
		}
	}
    
	printf("%d\n",solve(0,0));
}
