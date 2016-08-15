#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char c;
	while((c = getchar()) && c != EOF) {
		if(65 <= c && c <= 77) 
			printf("%c",c+13);
		else if(78 <= c && c <= 90) 
			printf("%c",c-13);
		else if(97 <= c && c <= 109) 
			printf("%c",c+13);
		else if(110 <= c && c <= 122) 
			printf("%c",c-13);
		else
			printf("%c",c);
	}
}
