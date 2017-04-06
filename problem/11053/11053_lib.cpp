#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,in; scanf("%d",&n);
    vector<int> lis;
    for(int i=1; i<=n; i++) {
        scanf("%d",&in); 
        auto it = lower_bound(lis.begin(), lis.end(), in);
        if(it != lis.end()) *it = in;
        else lis.push_back(in);
    }
    printf("%lu\n",lis.size());
}
