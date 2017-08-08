#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n,w,l,in; scanf("%d%d%d",&n,&w,&l);
    queue<int> brid, truck;
    for(int i=0; i<n; i++) {
        scanf("%d",&in);
        truck.push(in);
    }
    for(int i=0; i<w; i++)
        brid.push(0);
    int cur_l = 0, time = 0;
    while(!(truck.empty() && cur_l == 0)) {
        int front_truck = brid.front(); brid.pop();
        cur_l -= front_truck;
        if(!truck.empty()) {
            int new_truck = truck.front();
            if(cur_l + new_truck <= l) {
                brid.push(new_truck);
                cur_l += new_truck;
                truck.pop();
            } else brid.push(0);
        }
        time++;
    }
    printf("%d\n",time);
}
