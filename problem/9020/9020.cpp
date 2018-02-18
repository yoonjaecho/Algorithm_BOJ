#include <cstdio>
#define MAX 10000
bool p[MAX + 1];
int main() {
    for(int i=2; i<MAX; i++)
        p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    int T; scanf("%d", &T);
    while(T--) {
        int n; scanf("%d", &n);
        for(int i=n/2; i>=2; i--) {
            if(p[i] && p[n - i]) {
                printf("%d %d\n", i, n - i);
                break;
            }
        }
    }
}