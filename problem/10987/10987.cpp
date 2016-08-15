#include <cstdio>

int main() {

	char c;
	int cnt = 0;

	while((c = getchar()) && c != EOF) {
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			cnt++;
	}
	printf("%d\n",cnt);
}
