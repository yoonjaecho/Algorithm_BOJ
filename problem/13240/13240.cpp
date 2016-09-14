#include <cstdio>
int main() {
    int n,m;
    bool star = 0;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            star = !star;
            if(star) printf("*");
            else printf(".");
        }
        if(!(m&1)) star = !star;
        puts("");
    }
}
