#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
struct Point {
    int x, y;
    bool operator<(const Point &rhs) const {
        if(x != rhs.x)
            return x < rhs.x;
        else
            return y < rhs.y;
    }
} points[100001];
int x_cnt[100001];
vector<Point> ans;
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int n, m, q; scanf("%d",&n);
        ans.clear();
        memset(x_cnt, 0, sizeof(x_cnt));
        for(int i=1; i<=n; i++) {
            scanf("%d%d", &points[i].x, &points[i].y);
            x_cnt[points[i].x]++;
        }
        sort(points + 1, points + n + 1);
        int cur_x = 0, cur_y = 0;
        for(int p_index=1;;) {
            int cnt = x_cnt[cur_x];
            int start = p_index, end = p_index + cnt - 1;
            if(points[start].y == cur_y) { // asc
                for(int i=start; i<=end; i++)
                    ans.push_back({points[i].x, points[i].y});
            } else { // desc
                for(int i=end; i>=start; i--)
                    ans.push_back({points[i].x, points[i].y});
            }
            if(ans.size() == n) break;
            p_index = end + 1;
            cur_x = points[p_index].x;
            cur_y = ans[ans.size() - 1].y;
        }
        scanf("%d", &m);
        while(m--) {
            scanf("%d", &q);
            printf("%d %d\n",ans[q-1].x,ans[q-1].y);
        }
    }
}