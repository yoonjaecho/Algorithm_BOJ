#include <cstdio>
#include <cstring>

int main()
{
	char in[101];
	int a[26];

	scanf("%s",in);
	memset(a,0,sizeof(a));

	for(int i=0; i<strlen(in); i++) {
		a[in[i]-97] += 1;
	}

	for(int i=0; i<26; i++) 
		printf("%s%d",i? " ":"",a[i]);


}
