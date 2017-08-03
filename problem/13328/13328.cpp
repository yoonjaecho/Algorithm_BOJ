#include <cstdio>
#include <vector>
using namespace std;
#define MOD 31991
#define matrix vector<vector<int>>
int d,t;
matrix operator *(const matrix &a, const matrix &b) {
    int n = a.size();
    matrix c(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++)
                c[i][j] += (a[i][k] * b[k][j]) % MOD;
            c[i][j] %= MOD;
        }
    }
    return c; 
}
int main() {
    scanf("%d%d",&d,&t);
    matrix D(d, vector<int>(d));
    matrix I(d, vector<int>(d));
    for(int i=0; i<d; i++) 
        I[i][i] = D[0][i] = 1;
    for(int i=1; i<d; i++) 
        D[i][i-1] = 1;
    while(t > 0) {
        if(t % 2 == 1)
            I = I * D;
        D = D * D;
        t /= 2;
    }
    printf("%d\n",I[0][0]);
}
