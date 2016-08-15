#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int a[10];
        for(int i=0; i<10; i++)
            scanf("%d",&a[i]);
        sort(a,a+10);
        printf("%d\n",a[7]);
    }
}
