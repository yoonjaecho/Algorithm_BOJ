#include <cstdio>
#include <stack>
#include <algorithm>
#include <cstring>

using namespace std;

char str[51];

int main()
{
	int test_case;
	scanf("%d",&test_case);
	while(test_case--) {
		bool VPS = true;
		int cnt = 0;
		stack<char> s;
		scanf("%s",str);
		for(int i=0; i<strlen(str); i++) {
			if(str[i] == '(') {
				s.push(str[i]);
				cnt++;
			} else {
				if(s.empty()) {
					VPS = false;
					break;
				} else {
					s.pop();
					cnt--;
				}
			}
		}
		if(VPS && (!cnt)) printf("YES\n");
		else printf("NO\n");
	}
}
