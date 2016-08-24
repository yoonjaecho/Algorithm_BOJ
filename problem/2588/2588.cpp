#include <cstdio>
int arr[3];
int main()
{
    int m,n,a,b,c,temp,i=0;
    scanf("%d%d",&m,&n);
    temp = n;
    while(n>0) {
        arr[i] = n%10;
        n /= 10;
        printf("%d\n",m*arr[i++]);
    }
    printf("%d\n",m*temp);
}
