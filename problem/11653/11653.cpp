#include <cstdio>
int main() {
    int n; scanf("%d",&n);
    for(int i=2; i<=n; i++) {
        while(1) {
            if(!(n%i)) {
                printf("%d\n",i);
                n /= i;
            } else break;
        }
    }
}
