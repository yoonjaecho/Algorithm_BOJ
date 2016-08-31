#include <cstdio>
#include <algorithm>
using namespace std;
int a[8];
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    sort(a,a+n);
    do {
        int sum=0;
        for(int i=1; i<n; i++)
            sum += abs(a[i-1]-a[i]);
        ans = max(ans,sum);
    } while(next_permutation(a,a+n));
    printf("%d\n",ans);
}
