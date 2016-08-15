#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
bool xycmp(const pair<int,int> &m, const pair<int,int> &n) {
	if(m.second < n.second) return true;
	else if(m.second == n.second) return m.first < n.first;
	else return false;
}

int main()
{
	int n,a,b;
	vector<pair<int,int>> v;
	scanf("%d",&n);
	while(n--) {
		scanf("%d %d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),xycmp);
	for(int i=0; i<v.size(); i++)
		printf("%d %d\n",v[i].first,v[i].second);
}

