#include <cstdio>
int idx[10];
int main() {
	int a,b,c,res;
	scanf("%d %d %d",&a,&b,&c);
	res = a*b*c;
	while(res>0) {
		idx[res%10]++;
		res /= 10;
	}
	for(int i=0; i<10; i++)
		printf("%d\n",idx[i]);
}
