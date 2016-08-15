#include <cstdio>
int a[1001];
int main() {
    int tc,numS,sum;
    double res,avr;
    for(scanf("%d",&tc); tc--;) {
        res = sum = 0;
        scanf("%d",&numS);
        for(int i=0; i<numS; i++) {
            scanf("%d",&a[i]);
            sum += a[i];
        }
        avr = sum/numS;
        for(int i=0; i<numS; i++) 
            if(a[i] > avr) res++;
        printf("%.3lf%%\n",res/numS*100);
    }
}
