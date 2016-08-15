#include <cstdio>

using namespace std;

int main()
{
	int test_case;
	int a,b,t;

	scanf("%d",&test_case);
	
	while(test_case--) {
		scanf("%d %d",&a,&b);
		t = a;
		b--;
		while(b--) {
			a *= t;
			a %= 10;
		}
		if(a==0)
			printf("10\n");
		else
			printf("%d\n",a);
	}
}
