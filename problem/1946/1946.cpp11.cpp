#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int score[100001];
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int n,ans=0,as,bs,min=987654321;
        memset(score,0,sizeof(score));
        scanf("%d",&n);
        for(int i=0; i<n; i++) {
            scanf("%d %d",&as,&bs);
            score[as]=bs;
        }
        for(int i=1; i<=n; i++) {
            if(score[i] <= min) {
                min = score[i];
                ans++;
            }
        }
        printf("%d\n",ans);
    }
}
