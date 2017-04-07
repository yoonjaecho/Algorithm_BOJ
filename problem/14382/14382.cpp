#include <cstdio>
#include <cstring>
bool check[10];
int main() {
    int tc; scanf("%d",&tc);
    for(int i=1; i<=tc; i++) {
        int n,m,cnt=0; scanf("%d",&n);
        memset(check,0,sizeof(check));
        if(!n) {
            printf("Case #%d: INSOMNIA\n",i);
            continue;
        }
        m = n;
        while(1) {
            int t = m;
            while(t) {
                if(!check[t%10]) {
                    cnt++;
                    if(cnt==10) goto LAND; 
                }
                check[t%10] = 1;
                t /= 10;
            }
            m += n;
        }
LAND:
        printf("Case #%d: %d\n",i,m);
    }
}
