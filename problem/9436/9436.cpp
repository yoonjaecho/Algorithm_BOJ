#include <cstdio>
int main() {
    int n,t;
    while(scanf("%d%d",&n,&t) == 2) {
        int r = 0, cnt = 0;
        while(1) {
            cnt += (r + t) / n;
            r = (r + t) % n; 
            n--; r--;
            if (r == -1 || !r) break;
        }
        printf("%d %d\n",n,cnt);
    }
}
