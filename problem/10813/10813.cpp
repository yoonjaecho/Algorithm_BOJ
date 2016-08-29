#include <cstdio>
#include <algorithm>
using namespace std;
int a[101];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++) a[i]=i;
    while(m--) {
        int aa,bb;
        scanf("%d%d",&aa,&bb);
        swap(a[aa],a[bb]);
    }
    for(int i=1; i<=n; i++) printf("%d ",a[i]);
}
