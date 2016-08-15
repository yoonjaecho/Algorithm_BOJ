#include <cstdio>
#include <algorithm>
#define ll long long
#define mod 10007

using namespace std;

ll d[1001][10];

int main()
{
	int n;
	ll sum = 0;
	scanf("%d",&n);

	for(int i=0; i<=9; i++)
		d[1][i] = 1;

	for(int i=2; i<=n; i++) {
		for(int j=0; j<=9; j++) {
			for(int k=0; k<=j; k++) {
					d[i][j] += d[i-1][k] % mod;
			}
		}
	}


	for(int i=0; i<=9; i++)
		sum += d[n][i];

	printf("%lld\n",sum % mod);
}

