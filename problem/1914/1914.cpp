#include <cstdio>
#define MAX 10000000000000000
#define ll long long
void hanoi(int n, int x, int y, int z) {
    if(n) {
        hanoi(n-1, x, z, y);
        printf("%d %d\n", x, z);
        hanoi(n-1, y, x, z);
    }
}
int main() {
	int n; scanf("%d",&n);
	ll a=0, b=1;
	for (int i=1; i<=n; i++) {
		a *= 2;
		b *= 2;
		a += b / MAX;
		b %= MAX;
	}
	b -= 1;
	if(a) printf("%lld%016lld\n", a, b);
	else printf("%lld\n", b);
	if(n <= 20) hanoi(n, 1, 2, 3);
}