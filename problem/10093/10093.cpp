#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    ll a,b,aa,bb; scanf("%lld%lld",&a,&b);
    aa = min(a,b); bb = max(a,b);
    if(aa == bb) {
        puts("0");
        return 0;
    }
    printf("%lld\n", bb-aa-1);
    for(ll i=aa+1; i<bb; i++)
        printf(i!=bb-1? "%lld ":"%lld\n",i);
}
