#include <cstdio>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int r,e,c;
        scanf("%d%d%d",&r,&e,&c);
        if(r > (e-c)) puts("do not advertise");
        else if(r == (e-c)) puts("does not matter");
        else puts("advertise");
    }
}
