#include <cstdio>
int main() {
    int tc,v,e;
    scanf("%d",&tc);
    while(tc--) {
        scanf("%d%d",&v,&e);
        printf("%d\n",2-v+e);
    }
}
