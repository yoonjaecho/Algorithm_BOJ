#include <cstdio>
#include <algorithm>
using namespace std;
int a[111111],n,k,m=-1e9,c,size;
int main() {
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++) {
        scanf("%d",a+i);
        c += a[i];
        size++;
        if(size > k) {
            size--;
            c -= a[i-k];
        }
        if(size == k) 
            m = max(m, c);
    }
    printf("%d\n",m);
}
