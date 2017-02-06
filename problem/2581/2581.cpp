#include <cstdio>
#include <cstring>
#define MAX_N 10000007
unsigned char prime[(MAX_N + 7) / 8];
int m,n;
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
    for(int i=2; i*i<=n; i++) 
        if(is_prime(i))
            for(int j=i*i; j<=n; j+=i)
                set_composite(j);
}
int main() {
    scanf("%d%d",&m,&n);
    erastosthenes();
    int first,sum=0;
    bool found = false;
    for(int i=m; i<=n; i++) {
        if(is_prime(i)) {
            if(!found) {
                first = i;
                found = true;
            }
            sum += i;
        }
    }
    if(!sum) puts("-1"); 
    else printf("%d\n%d\n",sum,first);
}
