#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;
typedef vector<vector<ll>> matrix;
matrix operator*(const matrix &a, const matrix &b) {
    int n = a.size();
    matrix c(n, vector<ll>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            c[i][j] %= MOD;
        }
    }
    return c;
}
int main() {
    ll n; cin >> n;
    if(!(n&1)) n--;
    if(n <= 1) {
        cout << n << '\n';
        return 0;
    }
    matrix ans = {{1,0},{0,1}};
    matrix a = {{1,1},{1,0}};
    while(n>0) {
        if(n%2 == 1)
            ans = ans * a;
        a = a * a;
        n /= 2;
    }
    cout << ans[0][0] << '\n';
}
