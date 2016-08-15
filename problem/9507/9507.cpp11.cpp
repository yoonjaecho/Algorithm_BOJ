#include <cstdio>
#define ll long long
ll a[68];
ll koong(int i) {
    ll &ret = a[i];
    if(ret>0) return ret;
    ret = koong(i-1) + koong(i-2) + koong(i-3) + koong(i-4);
    return ret; 
}
int main()
{
    int tc,in;
    scanf("%d",&tc);
    a[0] = a[1] = 1;
    a[2] = 2; a[3] = 4;
    while(tc--) {
        scanf("%d",&in);
        printf("%lld\n",koong(in));
    }
}
