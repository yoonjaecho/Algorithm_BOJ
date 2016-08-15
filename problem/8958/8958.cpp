#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int test_case;
	char c[81];

	scanf("%d",&test_case);

	while(test_case--) {
		int score = 0;
		int consecScore = 0;

		scanf("%s",c);

		for(int i=0; i<strlen(c); i++) {
			if(c[i] == 'O') {
				consecScore++;
				score += consecScore;
			} else if(c[i] == 'X') {
				consecScore = 0;
			}
		}

		printf("%d\n",score);

	}
}

