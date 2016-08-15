#include <cstdio>
int arr[101];
int temp[101];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++) arr[i] = i;
    while(m--) {
       int a,b;
       scanf("%d %d",&a,&b);
       int idx=0;
       for(int i=a; i<=b; i++) {
            temp[b-idx++] = arr[i];
       }
       for(int i=a; i<=b; i++) 
            arr[i] = temp[i];
    }
    for(int i=1; i<=n; i++)
        printf("%d ",arr[i]);
}
