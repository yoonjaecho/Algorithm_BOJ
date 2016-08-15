#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

vector<int> v[101];
bool check[101];

void bfs(int x) {
	queue<int> q;
	memset(check,false,sizeof(check));
	q.push(x);
	while(!q.empty()) {
		int y = q.front();
		q.pop();
		for(int i=0; i<v[y].size(); i++) {
			int next = v[y][i];
			if(check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}

int main()
{
	int n,in;
	scanf("%d",&n);

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d",&in);
			if(in == 1) {
				v[i].push_back(j);
			}
		}
	}

	for(int i=0; i<n; i++) {
		bfs(i);

		for(int j=0; j<n; j++) {
			if(check[j])
				printf("1 ");
			else
				printf("0 ");
		}
		puts("");
	}

}
