#include <cstdio>
#define MAX 250000
bool p[MAX+1];
int main() {
    for(int i=2; i<MAX; i++) p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    int n,ans;
    while(scanf("%d",&n) && n) {
        ans = 0;
        for(int i=n+1; i<=2*n; i++)
            if(p[i]) ans++;
        printf("%d\n",ans);
    }
}
