#include <cstdio>
bool line[10001];
int main() {
    int n,q,cnt;
    scanf("%d%d",&n,&q);
    cnt = n;
    while(q--) {
        int s,e;
        scanf("%d%d",&s,&e);
        for(int i=s; i<=n; i+=e) {
            if(!line[i]) {
                line[i] = 1;
                cnt--;
            }
        }
    }
    printf("%d\n",cnt);
}
