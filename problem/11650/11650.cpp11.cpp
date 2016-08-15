#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool xycmp(const pair<int,int> &m, const pair<int,int> &n) {
	if(m.first < n.first) return true;
	else if(m.first == n.first) 
		return m.second <= n.second;
	else return false;
}

int main()
{
	int n,x,y;
	vector<pair<int,int>> v;
	scanf("%d",&n);
	while(n--) {
		scanf("%d %d",&x,&y);
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),xycmp);
	for(int i=0; i<v.size(); i++)
		printf("%d %d\n",v[i].first,v[i].second);
}
		
