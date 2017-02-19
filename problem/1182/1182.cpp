#include <cstdio>
int a[21],n,s,cur,ans=0;
int main() {
    scanf("%d%d",&n,&s);
    for(int i=0; i<n; i++) scanf("%d",a+i);
    for(int i=1; i<(1<<(n)); i++) {
        cur = 0;
        for(int j=0; j<n; j++) {
            if(i & (1 << j))
                cur += a[j];
        }
        if(cur == s) ans++;
    }
    printf("%d\n",ans);
}
