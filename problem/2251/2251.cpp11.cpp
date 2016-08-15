#include <stdio.h>
#include <tuple>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;

bool visit[200][200][200]={0,};

int main()
{
	int A,B,C;
	set<int> ans;
	queue<tuple<int, int, int>> q;
	
	scanf("%d %d %d",&A,&B,&C);
	q.push(make_tuple(0,0,C));

	while(!q.empty()) {
		int a,b,c;
		tuple<int, int, int> t = q.front(); 
		q.pop();

		a = get<0>(t);
		b = get<1>(t);
		c = get<2>(t);

		if(visit[a][b][c]) continue;
		visit[a][b][c] = 1;
		
		if(a==0) ans.insert(c);

		if(a > 0) {
			if(a > B-b) q.push(make_tuple(a-(B-b),B,c));
			else q.push(make_tuple(0, b+a, c));
			if(a > C-c) q.push(make_tuple(a-(C-c),b,C));
			else q.push(make_tuple(0, b, c+a));
		}
	
		if(b > 0) {
			if(b > A-a) q.push(make_tuple(A,b-(A-a),c));
			else q.push(make_tuple(a+b, 0, c));
			if(b > C-c) q.push(make_tuple(a,b-(C-c),C));
			else q.push(make_tuple(a, 0, c+b));
		}
	
		if(c > 0) {
			if(c > A-a) q.push(make_tuple(A,b,c-(A-a)));
			else q.push(make_tuple(a+c, b, 0));
			if(c > B-b) q.push(make_tuple(a,B,c-(B-b)));
			else q.push(make_tuple(a, b+c, 0));
		}
	}

	for(auto it = ans.begin(); it!=ans.end(); it++) 
		printf("%d ", *it);
}
