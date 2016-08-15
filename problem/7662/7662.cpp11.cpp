#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main() {
	multiset<int> ms;
	int t;
	scanf("%d\n", &t);
	while (t--) {
		ms.clear();
		int n;
		scanf("%d\n", &n);
		char op;
		int num;
		for (int i = 0; i < n; i++) {
			scanf("%c %d\n", &op, &num);
			if (op == 'I') {
				ms.insert(num);
			}
			else {
				if (!ms.empty()) {
					if (num == -1) ms.erase(ms.begin());
					else {
						auto it = ms.end();
						it--;
						ms.erase(it);
					}
				}
			}
		}
		if (ms.empty()) puts("EMPTY"); 
        else printf("%d %d\n", *ms.rbegin(), *ms.begin());
	}
}
