#include <cstdio>
int n;
void print(int s,int m) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=s; j++)
            printf(" ");
        for(int j=1; j<=n-s; j++)
            printf("*");
        if(m) s--;
        else s++;
        puts("");
    }
}
int main() {
    scanf("%d",&n);
    print(n-1,1);
    print(1,0);
}
