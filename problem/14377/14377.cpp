#include <cstdio>
#include <cstring>
int height[2501];
int main() {
    int t; scanf("%d",&t);
    for(int tc=1; tc<=t; tc++) {
        memset(height,0,sizeof(height));
        int n,in; scanf("%d",&n);
        int j = n*(n*2-1);
        while(j--) {
            scanf("%d",&in);
            height[in] = !height[in];
        }
        printf("Case #%d: ",tc);
        for(int i=0; i<2501; i++)
            if(height[i]) printf("%d ",i);
        puts("");
    }
}
