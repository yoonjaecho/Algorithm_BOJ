#include <cstdio>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;
struct Point {
    int x, y;
    Point() {}
    Point(int x, int y) : x(x), y(y) {}
    bool operator<(const Point &rhs) const {
        if (y == rhs.y) return x < rhs.x;
        else return y < rhs.y;
    }
};
bool xcmp(const Point &u, const Point &v) {
    return u.x < v.x;
}
int dist(Point p1, Point p2) {
    return (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y);
}
int main() {
    int n; scanf("%d",&n);
    vector<Point> a(n);
    for(int i=0; i<n; i++)
        scanf("%d %d",&a[i].x,&a[i].y);
    sort(a.begin(), a.end(), xcmp);
    set<Point> candidate = {a[0], a[1]};
    int theta = dist(a[0], a[1]);
    int start = 0;
    for(int i=2; i<n; i++) {
        Point now = a[i];
        while(start < i) {
            auto p = a[start];
            int x = now.x - p.x;
            if(x*x > theta) {
                candidate.erase(p);
                start++;
            } else break;
        }
        int d = (int)sqrt((double)theta) + 1;
        auto lower = candidate.lower_bound(Point(-100000, now.y-d));
        auto upper = candidate.upper_bound(Point(100000, now.y+d));
        for(auto it = lower; it != upper; it++)
            theta = min(theta, dist(now, *it));
        candidate.insert(now);
    }
    printf("%d\n", theta);
}