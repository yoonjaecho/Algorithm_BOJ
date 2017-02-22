#include <cstdio>
#include <algorithm>
#define M 1000000000000000000UL
using namespace std;
struct bInt {
	unsigned long long a, b;
	bInt() : a(0), b(0) {}
	bInt(unsigned long long n) : a(n), b(0) {}
	inline bInt &operator+(const bInt &val) {
		b = b + val.b + (a + val.a) / M;
		a = (a + val.a) % M;
		return *this;
	}
	inline bInt &operator+=(const bInt &val) {
		*this = this->operator+(val);
		return *this;
	}
	void print() {
		if (b == 0) printf("%llu\n", a);
		else printf("%llu%018llu\n", b, a);
	}
	inline bool operator!=(const bInt &val) {
		return a != val.a || b != val.b;
	}
};
bInt zero(0), one(1), dp[101][101];
bInt bino(int n, int r) {
	if (n == r || !r) return one;
	if (dp[n][r] != zero) return dp[n][r];
	return dp[n][r] = bino(n-1, r) + bino(n-1, r-1);
}
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	bino(n, m).print();
}