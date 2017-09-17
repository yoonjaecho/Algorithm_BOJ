#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;
int dx[1001], dy[1001];
int main() {
    int n, ans_a, ans_b; scanf("%d", &n);
    ll min_rss = 2e9;
    for(int i=0; i<n; i++)
        scanf("%d%d", dx + i, dy + i);
    for(int a=1; a<=100; a++) {
        for(int b=1; b<=100; b++) {
            ll rss = 0;
            for(int i=0; i<n; i++) {
                ll h = dy[i] - (a * dx[i] + b);
                rss += h * h;
            }
            if(min_rss > rss) {
                min_rss = rss;
                ans_a = a;
                ans_b = b;
            }
        }
    }
    printf("%d %d\n", ans_a, ans_b);
}