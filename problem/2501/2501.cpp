#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,k; scanf("%d%d",&n,&k);
    vector<int> v;
    for(int i=1; i*i<=n; i++) {
        if(!(n%i)) {
            v.push_back(i); 
            if(i != n/i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size() < k) puts("0");
    else printf("%d\n",v[k-1]);
}
