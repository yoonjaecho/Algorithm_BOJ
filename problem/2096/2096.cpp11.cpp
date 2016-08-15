#include <stdio.h>
#include <algorithm>
using namespace std;
int d[2][3],p[2][3],a[3];
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<3; j++)
            scanf("%d",&a[j]);
        d[(i+1)%2][0] = a[0] + max(d[i%2][0],d[i%2][1]);
        d[(i+1)%2][1] = a[1] + max(d[i%2][0],max(d[i%2][1],d[i%2][2]));
        d[(i+1)%2][2] = a[2] + max(d[i%2][1],d[i%2][2]);
        p[(i+1)%2][0] = a[0] + min(p[i%2][0],p[i%2][1]);
        p[(i+1)%2][1] = a[1] + min(p[i%2][0],min(p[i%2][1],p[i%2][2]));
        p[(i+1)%2][2] = a[2] + min(p[i%2][1],p[i%2][2]);
    }
    int ret1=0,ret2=987654321;
    for(int i=0; i<3; i++) {
        ret1 = max(ret1, d[n%2][i]);
        ret2 = min(ret2, p[n%2][i]);
    }
    printf("%d %d",ret1,ret2);
}
