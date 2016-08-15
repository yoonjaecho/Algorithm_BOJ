#include <cstdio>
#include <list>

using namespace std;

int main() {

	int n,in;
	list<int> l;

	scanf("%d",&n);
	while(n--) {
		scanf("%d",&in);
		l.push_back(in);
	}
	l.sort();
	for(int &x : l)
		printf("%d\n",x);
}
