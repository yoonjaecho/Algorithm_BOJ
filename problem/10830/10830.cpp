#include <cstdio>
#include <vector>
using namespace std;
#define ll long long 
#define MOD 1000LL
#define matrix vector<vector<ll>>
matrix operator *(const matrix &a, const matrix &b) {
    int n = a.size();
    matrix c(n, vector<ll>(n));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++)
                c[i][j] += a[i][k] * b[k][j];
            c[i][j] %= MOD;
        }
    }
    return c;
}
int main() {
    int N; scanf("%d",&N);
    ll B; scanf("%lld",&B);
    matrix ans(N, vector<ll>(N));
    matrix A(N, vector<ll>(N));
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            scanf("%lld",&A[i][j]);
            if(i==j) ans[i][j] = 1LL;
        }
    }
    while (B > 0) {
        if (B % 2 == 1)
            ans = ans * A;
        A = A * A;
        B /= 2;
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++)
            printf("%lld ", ans[i][j]);
        puts("");
    }
}