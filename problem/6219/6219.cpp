#include <cstdio>
#define MAX 4000000
bool p[MAX+1];
int main() {
    for(int i=2; i<MAX; i++)
        p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    int a,b,d,ans=0; scanf("%d%d%d",&a,&b,&d);
    for(int i=a; i<=b; i++) {
        if(p[i]) {
            int t = i;
            while(t > 0) {
                if(t%10 == d) {
                    ans++;
                    break;
                }
                t /= 10;
            }
        }
    }
    printf("%d\n",ans);
}
