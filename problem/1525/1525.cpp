#include <cstdio>
#include <set>
#include <queue>
#include <algorithm>
#define ll long long
using namespace std;
int dy[4] = {0, -1, 0, 1};
int dx[4] = {-1, 0, 1, 0};
int ds[4] = {4, 12, -4, -12};
int main() {
    ll input = 0, goal = 0;
    int in, ans = 0;
    for(int i=0; i<9; i++) {
        scanf("%d",&in);
        input = (input << 4) + in;
    }
    for(int i=1; i<=8; i++) 
        goal = (goal << 4) + i;
    goal <<= 4;
    set<ll> visited;
    visited.insert(input);
    queue<ll> q;
    q.push(input);
    while(!q.empty()) {
        int qs = (int)q.size();
        for(int i=0; i<qs; i++) {
            ll cur = q.front(); q.pop();
            if(cur == goal) {
                printf("%d\n",ans);
                return 0;
            }
            int zp = 0;
            while(cur & (15LL << zp * 4)) zp++;
            int y = zp / 3;
            int x = zp % 3;
            for(int j=0; j<4; j++) {
                int ny = y + dy[j];
                int nx = x + dx[j];
                if(0 <= ny & ny <= 2 && 0 <= nx && nx <= 2) {
                    ll target = cur & (15LL << ((ny * 3 + nx) * 4));
                    ll next = cur - target;
                    if(ds[j] > 0) target <<= ds[j];
                    else target >>= -ds[j];
                    next += target;
                    if(visited.find(next) == visited.end()) {
                        q.push(next);
                        visited.insert(next);
                    }
                }
            }

        }
        ans++;
    }
    puts("-1");
}
