#include <cstdio>
#include <algorithm>
using namespace std;
int a[100001];
int main()
{
    int n,in,sum=0,ans=numeric_limits<int>::min();
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&in);
        sum = sum<0? in:sum+in;
        ans = max(ans,sum);
    }
    printf("%d\n",ans);
}
