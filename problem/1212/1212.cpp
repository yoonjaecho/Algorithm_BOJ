#include <cstdio>
int b[8] = {0,1,10,11,100,101,110,111};
int main()
{
    char c = getchar();
    printf("%d", b[c-'0']);
    while((c = getchar()) != '\n')
        printf("%03d", b[c-'0']);
}
