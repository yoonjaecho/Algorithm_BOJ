#include <cstdio>
bool check[10001];
int d(int n) {
    int res = n;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}
int main() {
    for(int i=1; i<=10000; i++) {
        if(!check[i]) printf("%d\n",i);
        else continue;
        int n = i;
        while(n <= 10000) {
            n = d(n);
            check[n] = 1;
        }
    }
}
