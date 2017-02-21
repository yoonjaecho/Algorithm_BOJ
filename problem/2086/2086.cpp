#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define MOD 1000000000
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
    ll a,b; cin >> a >> b;
    matrix ans = {{1,0},{0,1}};
    matrix A = {{1,1},{1,0}};
    a += 1; b += 2;
    while(a>0) {
        if(a%2 == 1)
            ans = ans * A;
        A = A * A;
        a /= 2;
    }
    ll pa = ans[0][1];
    ans = {{1,0},{0,1}};
    A = {{1,1},{1,0}};
    while(b>0) {
        if(b%2 == 1)
            ans = ans * A;
        A = A * A;
        b /= 2;
    }
    cout << (ans[0][1] - pa + MOD) % MOD << '\n';
}
