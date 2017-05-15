#include <cstdio>
#include <cstdlib>
int n,cnt=0;
int q[16];
bool is_promising(int row) {
    if(row < 1) return true;
    for(int i=0; i<row; i++)
        if(q[row] == q[i] || row - i == abs(q[row] - q[i]))
            return false;
    return true;
}
void nqueen(int row) {
    for(int i=0; i<n; i++) {
        q[row] = i;
        if(is_promising(row)) {
            if(row == n-1) cnt++; 
            else nqueen(row+1);
        }
    }
}
int main() {
    scanf("%d",&n);
    nqueen(0);
    printf("%d\n",cnt);
}
