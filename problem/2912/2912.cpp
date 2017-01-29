#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int dwarf[300001],color[10001];
int main() {
    int n,c,m;
    scanf("%d%d",&n,&c);
    for(int i=1; i<=n; i++) 
        scanf("%d",&dwarf[i]);
    scanf("%d",&m);
    while(m--) {
        int a,b,k;
        scanf("%d%d",&a,&b);
        k = (b - a + 1);
        memset(color,0,sizeof(color));
        for(int i=a; i<=b; i++) 
            color[dwarf[i]]++;
        int biggest = color[0];
        int bigIdx = 0;
        for(int i=1; i<=c; i++) {
            if(biggest < color[i]) {
                biggest = color[i];
                bigIdx = i;
            }
        }
        if(biggest > k/2)
            printf("yes %d\n",bigIdx);
        else puts("no");
    }
}
