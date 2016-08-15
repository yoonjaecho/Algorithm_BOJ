#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char str[81];
	int test_case,idx;
	scanf("%d",&test_case);
	while(test_case--) {
		scanf("%d",&idx);
		scanf("%s",str);
		for(int i=0; i<strlen(str); i++) 
			if((i+1)!=idx) printf("%c",str[i]);
		puts("");
	}
}
