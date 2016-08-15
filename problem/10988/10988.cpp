#include <cstdio>
#include <cstring>

using namespace std;

void isPalindrome(char str[], int left, int right) {
	if(left > right) {
		printf("1\n");
		return;
	}

	if(str[left] != str[right]) {
		printf("0\n");
		return;
	}

	isPalindrome(str,left+1,right-1);
}


int main() {

	char inputString[101];

	scanf("%s",inputString);
	isPalindrome(inputString,0,strlen(inputString)-1);

	return 0;
}
	

