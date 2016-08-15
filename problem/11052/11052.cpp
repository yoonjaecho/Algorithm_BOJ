#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int d[10001];

int main() {
        int n,in;
        scanf("%d",&n);

        vector<int> a(n+1);

        for(int i=1; i<=n; i++)
                scanf("%d",&a[i]);

        for(int i=1; i<=n; i++) {
                for(int j=1; j<=i; j++) {
                        d[i] = max(d[i],d[i-j] + a[j]);
                }
        }

        printf("%d\n",d[n]);
}
