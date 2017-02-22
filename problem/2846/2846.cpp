#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
    int n,a,b,cur=0,ans=0; scanf("%d%d",&n,&a);
    while(n--) {
        scanf("%d",&b);
        if(a < b) {
            cur += b - a;
            ans = max(ans,cur);
        } else cur = 0;
        a = b;
    }
    printf("%d\n",ans);
}
