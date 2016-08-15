#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int x,y,w,h;

	scanf("%d %d %d %d",&x,&y,&w,&h);

	printf("%d\n",min(min(w-x,h-y),min(x,y)));

	return 0;
}


