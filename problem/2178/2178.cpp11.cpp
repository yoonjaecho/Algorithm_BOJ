#include <cstdio>
#include <queue>
#include <algorithm>
#include <tuple>

using namespace std;

int a[101][101];
bool visit[101][101];

int main()
{
	int n,m;
	queue<tuple<int,int,int>> q;
	priority_queue<int, vector<int>, greater<int>> pq;

	scanf("%d %d",&n,&m);

	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			scanf("%1d",&a[i][j]);

	q.push(make_tuple(1,1,1));

	while(!q.empty()) {
		int x,y,w;
		tuple<int, int, int> t = q.front(); q.pop();
		x = get<0>(t);
		y = get<1>(t);
		w = get<2>(t);

//		printf("front : (%d,%d,%d)\n",x,y,w);

		if(visit[x][y]) continue;
		visit[x][y] = 1;
		w++;

		if(x == n && y == m) {
			pq.push(w-1);
			continue;
		}

		if(a[x][y-1]) {
			q.push(make_tuple(x,y-1,w));
//			printf("push : (%d,%d,%d)\n",x,y-1,w);
		}
		if(a[x][y+1]) {
			q.push(make_tuple(x,y+1,w));
//			printf("push : (%d,%d,%d)\n",x,y+1,w);
		}
		if(a[x-1][y]) {
			q.push(make_tuple(x-1,y,w));
//			printf("push : (%d,%d,%d)\n",x-1,y,w);
		}
		if(a[x+1][y]) {
			q.push(make_tuple(x+1,y,w));
//			printf("push : (%d,%d,%d)\n",x+1,y,w);
		}


	}

	printf("%d\n",pq.top());
}
