#include <cstdio>
int dp0[44] = {1, 0}, dp1[44] = {0, 1};
int main() {
	int T; scanf("%d", &T);
	for(int i=2; i<=40; i++) {
		dp0[i] = dp0[i - 1] + dp0[i - 2];
		dp1[i] = dp1[i - 1] + dp1[i - 2];
	}
	while(T--) {
		int N; scanf("%d", &N);
		printf("%d %d\n", dp0[N], dp1[N]);
	}
}