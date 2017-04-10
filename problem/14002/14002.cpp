#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
int a[1001], dp[1001], p[1001];
int main() {
    int n,m=-1e9,index; scanf("%d",&n);
    memset(p,-1,sizeof(p));
    for(int i=1; i<=n; i++) {
        scanf("%d",a+i); 
        dp[i] = 1;
        for(int j=1; j<i; j++) {
            if(a[j] < a[i] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                p[i] = j;
            }
        }
        if(m < dp[i]) {
            m = dp[i];
            index = i;
        }
    }
    printf("%d\n",m);
    vector<int> v;
    while(1) {
        v.insert(v.begin(), a[index]);
        index = p[index];
        if(index == -1) break;
    }
    for(auto &x:v)
        printf("%d ",x);
}
