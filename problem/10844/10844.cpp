#include <cstdio>
#include <algorithm>
#define mod 1000000000
#define ll long long

using namespace std;

ll d[100][10];

int main()
{
	int n;
	ll sum=0;
	scanf("%d",&n);

	for(int i=1; i<=9; i++) 
		d[1][i] = 1;

	for(int i=2; i<=n; i++) {
		for(int j=0; j<=9; j++) {
			if(j==0)
				d[i][j] = d[i-1][j+1] % mod;
			else if(j==9)
				d[i][j] = d[i-1][j-1] % mod;
			else
				d[i][j] = (d[i-1][j-1] + d[i-1][j+1]) % mod;
		}
	}

	for(int i=0; i<=9; i++) 
		sum += d[n][i];

	printf("%lld\n",sum % mod);
}
