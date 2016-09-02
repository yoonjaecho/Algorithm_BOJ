#include <cstdio>
#include <cmath>
int main()
{
    double r,w,l;
    int idx=0;
    while(scanf("%lf %lf %lf",&r,&w,&l)==3) {
        bool fit = true;
        if(r*r < pow(w/2,2) + pow(l/2,2)) fit = false;
        printf("Pizza %d ",++idx);
        if(fit) puts("fits on the table.");
        else puts("does not fit on the table.");
    }
}
