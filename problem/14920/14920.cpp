#include <cstdio>
int main() {
    int n, cnt = 1; scanf("%d", &n);
    while(n != 1) {
        if(n & 1) n = n * 3 + 1;
        else n /= 2;
        cnt++;
    }
    printf("%d\n", cnt);
}