#include <cstdio>
#include <cstring>
bool arr[501]; 
int main()
{
    int tc,in;
    scanf("%d",&tc);
    while(tc--) {
        int p,m;
        scanf("%d%d",&p,&m);
        int cnt = p;
        memset(arr,0,sizeof(arr));
        for(int i=1; i<=p; i++) {
            scanf("%d",&in);
            arr[in] = true;
        }
        for(int i=1; i<=m; i++) 
            if(arr[i]) cnt--;
        printf("%d\n",cnt);
    }
}
