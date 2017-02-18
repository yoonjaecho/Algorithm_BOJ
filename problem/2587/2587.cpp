#include <cstdio>
#include <algorithm>
using namespace std;
int a[5];
int main() {
    int sum = 0;
    for(int i=0; i<5; i++) {
        scanf("%d",a+i);
        sum += a[i];
    }
    sort(a,a+5);
    printf("%d %d\n",sum/5,a[2]);
}
