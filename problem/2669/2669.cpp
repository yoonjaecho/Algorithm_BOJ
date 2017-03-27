#include <cstdio>
bool check[101][101];
int main() {
    int a,b,c,d,cnt=0;
    while(~scanf("%d%d%d%d",&a,&b,&c,&d)) {
        for(int i=a; i<c; i++) {
            for(int j=b; j<d; j++) {
                if(!check[i][j]) {
                    check[i][j] = 1;
                    cnt++;
                }
            }
        }
    }
    printf("%d\n",cnt);
}
