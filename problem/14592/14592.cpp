#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct Node {
    int num, point, submit, time;
};
vector<Node> v;
int main() {
    int N; scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        int a, b, c; scanf("%d%d%d", &a, &b, &c);
        v.push_back({i, a, b, c});
    }
    sort(v.begin(), v.end(), [&](Node const &a, Node const &b) {
        return a.point != b.point? a.point > b.point :
            a.submit != b.submit? a.submit < b.submit : a.time < b.time;
    });
    printf("%d\n", v[0].num);
}