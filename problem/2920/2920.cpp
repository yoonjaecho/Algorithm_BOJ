#include <cstdio>
int a[9];
int main()
{
    for(int i=1; i<=8; i++) 
        scanf("%d",&a[i]);
   
    bool as = 1;
    bool de = 1;
    for(int i=1; i<=8; i++) {
        if(a[i] != i) as = 0;
        if(a[i] != 8-i+1) de = 0;
    }
    if(as) puts("ascending");
    else if(de) puts("descending");
    else puts("mixed");
}
