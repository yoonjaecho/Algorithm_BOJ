#include <cstdio>
#include <cstring>

char s[101];
int main()
{
	scanf("%s",s);
	for(int i=0; i<strlen(s); i++) {
		if(65 <= s[i] && s[i] <= 90)
			printf("%c",s[i]+32);
		if(97 <= s[i] && s[i] <= 122)
			printf("%c",s[i]-32);
	}
}
