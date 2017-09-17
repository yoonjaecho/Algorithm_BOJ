#include <cstdio>
bool finger[6][6];
int main() {
    int n; scanf("%d", &n);
    while(n--) {
        int a, b; scanf("%d%d", &a, &b);
        if(a == 2 || a == 5 || b == 2 || b == 5) {
            puts("Woof-meow-tweet-squeek");
            return 0;
        }
        finger[a][b] = finger[b][a] = 1;
    }
    if(finger[1][3] && finger[1][4] && finger[3][4])
        puts("Wa-pa-pa-pa-pa-pa-pow!");
    else
        puts("Woof-meow-tweet-squeek");
}