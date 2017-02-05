#include <cstdio>
int psum[1111];
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int p = 1;
    for(int i=1; i<=45; i++) {
        for(int j=1; j<=i; j++) {
            psum[p] = psum[p-1] + i;
            p++;
        }
    }
    printf("%d\n",psum[b]-psum[a-1]);
}
