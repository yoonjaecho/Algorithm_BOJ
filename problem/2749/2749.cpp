#include <cstdio>
#define ll long long
#define MOD 1000000
const int p = MOD/10*15;
ll fibo[p] = {0,1};
int main() {
    ll n; scanf("%lld",&n);
    for(int i=2; i<p; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        fibo[i] %= MOD;
    }
    printf("%lld\n",fibo[n%p]);
}
