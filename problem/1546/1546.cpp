#include <cstdio>
#define MAX(a,b) (a)>(b)?(a):(b)
double sub[1001],max=0;
double sum=0;
int main() {
    int n; scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%lf",&sub[i]);
        max = MAX(max,sub[i]);
    }
    for(int i=1; i<=n; i++) {
        sub[i] = sub[i]/max*100;
        sum += sub[i];
    }
    printf("%.2lf\n",sum/n);
}
