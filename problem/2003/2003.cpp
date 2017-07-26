#include <cstdio>
int a[10001];
int main() {
    int n,m; scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++)
        scanf("%d",a+i);
    int ip=1, jp=1, cnt=0, sum=0;
    while(1) {
        if(sum >= m) sum -= a[ip++];
        else if(jp > n) break;
        else sum += a[jp++];
        if(sum == m) cnt++;
    }
    printf("%d\n", cnt);
}
