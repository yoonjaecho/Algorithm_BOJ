#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int N,X;
	int input;

	scanf("%d %d",&N, &X);

	for(int i=0; i<N; i++) {
		scanf("%d",&input);
		if(input < X)
			printf("%d ",input);
	}

	return 0;
}

