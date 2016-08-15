#include <cstdio>

int isPrime(int p) {
    if(p==1) return 0;
    for(int i=2; i*i<=p; i++) 
        if(p%i==0) return 0;
    return 1;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    for(int i=m; i<=n; i++) {
       if(isPrime(i)) printf("%d\n",i); 
    }
}
