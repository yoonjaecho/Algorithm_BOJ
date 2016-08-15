#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int A,B,C;
	scanf("%d %d %d",&A, &B, &C);

	priority_queue<int, vector<int>, greater<int> > minHeap;

	minHeap.push(A);
	minHeap.push(B);
	minHeap.push(C);

	minHeap.pop();

	printf("%d\n",minHeap.top());


	return 0;
}

