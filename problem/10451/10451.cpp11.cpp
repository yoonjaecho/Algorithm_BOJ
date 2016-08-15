#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

bool check[1001];
int a[1001];

void dfs(int x) {
	check[x] = true;
	int y = a[x];
	if(check[y] == false)
		dfs(y);
}

int main()
{
	int test_case,n,in,cnt;
	scanf("%d",&test_case);
	while(test_case--) {
		scanf("%d",&n);
		cnt = 0;
		memset(check,0,sizeof(check));
		memset(a,0,sizeof(a));

		for(int i=1; i<=n; i++) {
			scanf("%d",&in);
			a[i]=in;
		}

		for(int i=1; i<=n; i++) {
			if(!check[i]) {
				dfs(i);
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}
