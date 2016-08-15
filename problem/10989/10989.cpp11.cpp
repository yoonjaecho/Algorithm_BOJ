#include <cstdio>
#include <algorithm>
int arr[10001];
int main()
{
    int n,in;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&in);
        arr[in]++;
    }
    for(int i=1; i<=10001; i++) {
        while(arr[i]--) printf("%d\n",i);
    }
}
