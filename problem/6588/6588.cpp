#include <cstdio>
#include <cstring>

#define MAX_N 1000000

unsigned char prime[(MAX_N + 7) / 8];

bool is_prime(int k) {
    return prime[k>>3] & (1<<(k&7));
}

void set_composite(int k) {
    prime[k>>3] &= ~(1<<(k&7));
}

void erastosthenes() {
    memset(prime, 255, sizeof(prime));
    set_composite(0);
    set_composite(1);
    for(int i=2; i*i<=MAX_N; i++) 
        if(is_prime(i))
            for(int j=i*i; j<=MAX_N; j+=i)
                set_composite(j);
}

int main() {
    int n;
    erastosthenes();
    while(~scanf("%d",&n)) {
        if(!n) return 0;
        for(int i=2; i<=n; i++) {
            if(is_prime(i)) 
                if(is_prime(n-i)) {
                    printf("%d = %d + %d\n",n,i,n-i);
                    break;
                }
        }
    }
}
