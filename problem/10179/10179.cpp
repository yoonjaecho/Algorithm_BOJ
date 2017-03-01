#include <cstdio>
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        double p; scanf("%lf",&p);
        printf("$%.2lf\n",p*0.8);
    }
}
