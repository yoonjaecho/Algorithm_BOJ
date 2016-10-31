#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
int n;
int p[1001];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d",p+i);
    sort(p+1, p+n+1, greater<int>());
    for(int i=n; i>=1; i--) {
        if(p[i] >= i) {
            printf("%d\n",i);
            return 0;
        }
    }
    puts("0");
}
