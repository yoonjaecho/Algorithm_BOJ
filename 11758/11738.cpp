#include <cstdio>

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
    int res = x1*y2 + x2*y3 + x3*y1;
    res -= y1*x2 + y2*x3 + y3*x1;
    if(res > 0) return 1;
    else if(res < 0) return -1;
    else return 0;
}

int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    printf("%d\n",ccw(a,b,c,d,e,f));
}
