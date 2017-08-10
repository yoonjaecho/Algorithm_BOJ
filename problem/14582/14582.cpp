#include <cstdio>
int a[10], b[10], asum, bsum;
int main() {
    for(int i=1; i<=9; i++)
        scanf("%d",a+i);
    for(int i=1; i<=9; i++)
        scanf("%d",b+i);
    bool moment_win = 0;
    for(int i=1; i<=9; i++) {
        asum += a[i];
        if(asum > bsum) moment_win = 1;
        bsum += b[i];
    }
    puts(moment_win? "Yes":"No");
}