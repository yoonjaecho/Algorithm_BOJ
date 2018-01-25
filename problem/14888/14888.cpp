#include <cstdio>
#include <algorithm>
using namespace std;
int N, a[111], divisor[4], MAX = -1e9-1, MIN = 1e9+1;
void go(int index, int val, int plus, int minus, int multiply, int divide) {
    if(index == N - 1) {
        MAX = max(MAX, val);
        MIN = min(MIN, val);
        return;
    }
    if(plus) go(index + 1, val + a[index + 1], plus - 1, minus, multiply, divide);
    if(minus) go(index + 1, val - a[index + 1], plus, minus - 1, multiply, divide);
    if(multiply) go(index + 1, val * a[index + 1], plus, minus, multiply - 1, divide);
    if(divide) go(index + 1, val / a[index + 1], plus, minus, multiply, divide - 1);
} 
int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<4; i++)
        scanf("%d", &divisor[i]);
    go(0, a[0], divisor[0], divisor[1], divisor[2], divisor[3]);
    printf("%d\n%d\n", MAX, MIN);
}