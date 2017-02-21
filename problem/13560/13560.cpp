#include <cstdio>
#include <algorithm>
using namespace std;
int a[10001];
int main() {
    int n,sum=0; scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d",a+i);
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++) {
        sum += a[i];
        if(sum < i*(i-1)/2) {
            puts("-1");
            return 0;
        }
    }
    printf("%d\n",(sum == n*(n-1)/2)?1:-1);
}
