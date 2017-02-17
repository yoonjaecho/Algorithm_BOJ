#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int a[4];
int main() {
    for(int i=0; i<4; i++) scanf("%d",&a[i]);
    sort(a,a+4);
    printf("%d\n",abs(a[0]+a[3]-a[1]-a[2]));
}
