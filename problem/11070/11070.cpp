#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
double pp[1001], mm[1001];
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int n, m; scanf("%d%d", &n, &m);
        int a, b;
        double MAX = -1e9, MIN = 1e9, p, q;
        memset(pp, 0, sizeof(pp));
        memset(mm, 0, sizeof(mm));
        for(int i=1; i<=m; i++) {
            scanf("%d%d%lf%lf", &a, &b, &p, &q);
            pp[a] += p;
            mm[a] += q;
            pp[b] += q;
            mm[b] += p;
        }
        for(int i=1; i<=n; i++) {
            double s = pp[i], a = mm[i];
            double w = (s == 0 && a == 0)? 0:(s*s)/(s*s+a*a);
            MAX = max(MAX, w), MIN = min(MIN, w);
        }
        printf("%d\n%d\n", (int)(MAX * 1000), (int)(MIN * 1000));
    }
}