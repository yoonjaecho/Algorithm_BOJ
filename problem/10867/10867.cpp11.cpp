#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	int n,in;
	set<int> s;
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&in);
		s.insert(in);
	}
	for(auto &x : s)
		printf("%d ",x);
}
