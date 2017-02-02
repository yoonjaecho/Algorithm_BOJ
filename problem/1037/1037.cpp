#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    vector<int> v;
    for(int i=0; i<n; i++) {
        int in;
        scanf("%d",&in);
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    printf("%d\n",v[0]*v[v.size()-1]);

}
