#include <cstdio>
#define MAX 1300000
bool p[MAX+1];
int main() {
    for(int i=2; i<MAX; i++)
        p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    int tc,n; scanf("%d",&tc);
    while(tc--) {
        scanf("%d",&n);
        if(p[n]) {
            puts("0");
            continue;
        }
        int l = 0;
        for(int i=n;;i--) {
            if(p[i]) break;
            else l++;
        }
        for(int i=n;;i++) {
            if(p[i]) break;
            else l++;
        }
        printf("%d\n",l);
    }
}
