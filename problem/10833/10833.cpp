#include <cstdio>
int main() {
    int tc,ans=0,a,s; scanf("%d",&tc);
    for(int i=1; i<=tc; i++) {
        scanf("%d%d",&s,&a);
        if(s>a) ans += a;
        else ans += a%s; 
    }
    printf("%d\n",ans);
}
