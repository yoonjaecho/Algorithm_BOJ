#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

struct Event {
    int x,h;
    bool open;
    Event(int x, int h, int o)
    :x(x),h(h),open(o) {}
};

int main()
{
    int n;
    scanf("%d",&n);
    vector<Event> ev;
    while(n--) {
        int l,h,r;
        scanf("%d%d%d",&l,&h,&r);
        ev.push_back(Event(l,h,true));
        ev.push_back(Event(r,h,false));
    }

    sort(ev.begin(), ev.end(), [&](Event const &a, Event const &b) {
        return a.x < b.x;
    });

    multiset<int> ms;
    ms.insert(0);
    int it = 0;

    while(it != ev.size()) {
        vector<Event> curEvent;
        int cur_x = ev[it].x;
        while(it < ev.size()) {
            if(cur_x == ev[it].x)
                curEvent.push_back(ev[it]);
            else if(cur_x < ev[it].x) break;
            it++;
        }
        int before = *ms.rbegin();
        for(Event e : curEvent) {
            if(e.open) ms.insert(e.h);
            else ms.erase(ms.find(e.h));
        }
        int after = *ms.rbegin();
        if(before != after)
            printf("%d %d ", cur_x, after);
    }
}
