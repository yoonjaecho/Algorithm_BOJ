#include <cstdio>
#include <algorithm>
using namespace std;
int a[10011];
int main() {
    int n; scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", a+i);
    sort(a, a+n);
    int two = -1e9;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            two = max(two, a[i] * a[j]);
    printf("%d\n", max(two, max(a[0] * a[1] * a[n-1], a[n-3] * a[n-2] * a[n-1])));
}