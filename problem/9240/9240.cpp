#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> Point;

vector<Point> convex_hull(vector<Point> &p) {
    if(p.size() <= 3) return p;
    swap(*p.begin(), *min_element(p.begin(), p.end()));
    auto ccw = [](Point const &a, Point const &b, Point const &c) {
        return a.first * b.second + b.first * c.second + c.first * a.second
            - b.first * a.second - c.first * b.second - a.first * c.second;
    };
    sort(p.begin() + 1, p.end(), [&](Point const &a, Point const &b) {
        return ccw(*p.begin(), a, b) > 0;
    });
    vector<Point> st(p.begin(), p.begin() + 2);
    for(auto it = p.begin() + 2; it != p.end(); it++) {
        while(st.size() >= 2 && ccw(*(st.end() - 2),
                    *(st.end() - 1), *it) <= 0)
            st.pop_back();
        st.push_back(*it);
    }
    while(st.size() >= 2 && ccw(*(st.end() - 2),
                *(st.end() - 1), *p.begin()) <= 0)
        st.pop_back();
    return st;
}

double getDist(const Point a, const Point b) {
    return hypot(a.first-b.first, a.second-b.second);
}

int main() {
    int n;
    scanf("%d", &n);
    vector<Point> p;
    while(n--) {
        int x,y;
        scanf("%d%d",&x,&y);
        p.push_back(Point(x,y));
    }
    vector<Point> ans = convex_hull(p);
    double max_val = 0;
    for(int i=0; i<ans.size(); i++) {
        for(int j=i+1; j<ans.size(); j++) {
            double dist = getDist(ans[i], ans[j]);
            max_val = max(max_val, dist);
        }
    }
    printf("%lf\n",max_val);
    return 0;
}
