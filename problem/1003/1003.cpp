#include <cstdio>

using namespace std;

int numOfZero;
int numOfOne;

int fibo(int n) {
	if(n==0) {
		numOfZero++;
		return 0;
	} else if(n==1) {
		numOfOne++;
		return 1;
	} else
		return fibo(n-1) + fibo(n-2);
}		

int main() {

	int test_case,in;

	scanf("%d",&test_case);

	while(test_case--) {
		numOfZero = numOfOne = 0;
		scanf("%d",&in);
		fibo(in);
		printf("%d %d\n",numOfZero,numOfOne);

	}
}
