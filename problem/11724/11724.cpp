#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int x) {
	check[x] = true;
	
	for(int i=0; i<a[x].size(); i++) {
		int y = a[x][i];
		if(check[y] == false) 
			dfs(y);
	}
}

int main()
{
	int n,m;
	int cnt = 0;

	scanf("%d %d",&n,&m);

	for(int i=0; i<m; i++) {
		int u,v;
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	for(int i=1; i<=n; i++) {
		if(!check[i]) {
			dfs(i);
			cnt++;
		}
	}

	printf("%d\n",cnt);
}
