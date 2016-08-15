#include <cstdio>

int main()
{
	int n,m,in;
	int sum[100001];
	int u,v;
	int res;

	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++) {
		scanf("%d",&in);
		sum[i] = sum[i-1] + in;
	}
	
	while(m--) {
		scanf("%d %d",&u,&v);
		res = sum[v] - sum[u-1];
		printf("%d\n",res);
	}
	


}
