#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int a[1<<21];
int main() {
    int k,n,sum=0; scanf("%d",&k);
    n = (1<<(k+1))-1;
    for(int i=2; i<=n; i++) {
        scanf("%d",a+i);
        sum += a[i];
    }
    for(int i=n; i>1; i-=2) {
        sum += abs(a[i] - a[i-1]);
        a[i/2] += max(a[i], a[i-1]);
    }
    printf("%d\n",sum);
}
