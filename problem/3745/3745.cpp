#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> lis;
int main() {
    int n, in;
    while(~scanf("%d",&n)) {
        lis.clear();
        for(int i=1; i<=n; i++) {
            scanf("%d",&in); 
            auto it = lower_bound(lis.begin(), lis.end(), in);
            if(it != lis.end()) *it = in;
            else lis.push_back(in);
        }
        printf("%lu\n",lis.size());
    }
}