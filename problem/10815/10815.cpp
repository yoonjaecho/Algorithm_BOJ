#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

int main() {

	map<int,int> m;
	map<int,int>::iterator it;

	int M,N,card;
	scanf("%d",&N);

	for(int i=0; i<N; i++) {
		scanf("%d",&card);
		m.insert(make_pair(card,i));
	}
	
	scanf("%d",&M);
	for(int i=0; i<M; i++) {
		scanf("%d",&card);
		if( (it = m.find(card)) != m.end() )
			printf("1 ");
		else
			printf("0 ");
	}

	return 0;
}

	
