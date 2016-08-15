#include <cstdio>
#include <set>
using namespace std;
int main()
{
	int in;
	set<int> s;
	for(int i=0; i<10; i++) {
		scanf("%d",&in);
		s.insert(in%42);
	}
	printf("%d\n",s.size());
}

