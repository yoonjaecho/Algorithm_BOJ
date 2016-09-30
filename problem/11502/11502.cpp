#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>

#define ll long long

using namespace std;

int isPrime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) return 0; 
    }
    return 1;
}

int main()
{
    int tc,n;
    scanf("%d",&tc);

    while(tc--) {
        bool found = false;
        scanf("%d",&n);

        if(isPrime(n-4)) {
            printf("2 2 %d\n",n-4);
            continue;
        } 

        for(int i=3; i<n; i++) {
            if(isPrime(i) && isPrime((n-i)/2)) {
                printf("%d %d %d\n",i,(n-i)/2,(n-i)/2);
                found = true;
                break;
            }
        }
        if(!found)
            puts("-1\n");
    }
}
