#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define MOD 1000000000
#define pivot 1000000
ll fibo[2000001];
int main() {
    ll n,ans; cin >> n;
    bool dir = n>=0;
    n += pivot;
    fibo[pivot] = 0;
    fibo[pivot+1] = 1;
    if(dir) {
        for(int i=pivot+2; i<=n; i++) {
            fibo[i] = fibo[i-1] + fibo[i-2];
            fibo[i] %= MOD;
        }
    } else {
        for(int i=pivot-1; i>=n; i--) {
            fibo[i] = fibo[i+2] - fibo[i+1];
            fibo[i] %= MOD;
        }
    }
    ans = fibo[n];
    if(ans>0) ans = 1;
    else if(ans<0) ans = -1;
    cout << ans << '\n' << abs(fibo[n]) << '\n';
}
