#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct Hw {
    int d,t;
    Hw(int d, int t)
        :d(d),t(t) {}
    bool operator<(const Hw &rhs) const {
        return t > rhs.t;
    }
};
int main() {
    int n,d,t;
    scanf("%d",&n);
    vector<Hw> v;
    for(int i=0; i<n; i++) {
        scanf("%d%d",&d,&t);
        v.push_back(Hw(d,t));
    }
    sort(v.begin(), v.end());
    int cur = v[0].t;
    for(auto &h: v) {
        int end = h.t;
        if(cur >= end) 
            cur = end - h.d;
        else 
            cur -= h.d;
    }
    printf("%d\n",cur);
}
