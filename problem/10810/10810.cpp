#include <cstdio>
#include <algorithm>
using namespace std;
int arr[101];
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    while(n--) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        for(int i=a; i<=b; i++) arr[i] = c;
    }
    for(int i=1; i<=m; i++) printf("%d ",arr[i]);
}
