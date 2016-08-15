#include <cstdio>

using namespace std;

int main() {
	int n;
	int temp;
	int cnt = 0;

	scanf("%d",&n);

	for(int i=0; i<5; i++) {
		scanf("%d",&temp);
		if(temp%10 == n)
			cnt++;
	}

	printf("%d\n",cnt);
}

