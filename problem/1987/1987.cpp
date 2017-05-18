#include <cstdio>
#include <algorithm>
using namespace std;
char map[22][22],check[26];
int cnt=1,r,c;
void dfs(int y, int x,int k) {
	if(0 <= y && y < r && 0 <= x && x < c) {
		if (!check[map[y][x]-'A']) {
			check[map[y][x]-'A'] = 1;
			cnt = max(cnt, k);
			dfs(y+1,x,k+1);
			dfs(y,x+1,k+1);
            dfs(y-1,x,k+1);
			dfs(y,x-1,k+1);
			check[map[y][x]-'A'] = 0;
		}
	}
}
int main() {
	scanf("%d %d",&r,&c);
	for(int i=0; i<r; i++) 
		scanf("%s", map[i]);
	dfs(0, 0, 1);
	printf("%d\n",cnt);	
}
