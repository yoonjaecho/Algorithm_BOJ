#include <cstdio>
bool swit[100001];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(m--) {
        int o,s,t;
        scanf("%d%d%d",&o,&s,&t);
        if(!o) {
            for(int i=s; i<=t; i++) swit[i] = !swit[i];
        } else {
            int ans = 0;
            for(int i=s; i<=t; i++) if(swit[i]) ans++;
            printf("%d\n",ans);
        }
    }
}
