#include <cstdio>
#include <queue>
using namespace std;
struct Node {
    int pos, time, cnt; 
};
int N, K, ans_time, ans_cnt;
bool check[100111];
int times[100111];
int main() {
    scanf("%d%d", &N, &K);
    queue<Node> q; q.push({N, 0, 0});
    while(!q.empty()) {
        Node cur = q.front(); q.pop();
        if(cur.pos < 0 || 100000 < cur.pos) continue;
        if(cur.pos == K) {
            if(check[cur.pos]) {
                if(ans_time < cur.time) continue;
                else if(ans_time == cur.time) ans_cnt++;
                else {
                    ans_time = cur.time;
                    ans_cnt = 1;
                }
            } else {
                check[cur.pos] = 1;
                ans_time = cur.time;
                ans_cnt = 1;
            }
        } else {
            if(check[cur.pos])
                if(times[cur.pos] < cur.time)
                    continue;
            check[cur.pos] = 1;
            times[cur.pos] = cur.time;
            q.push({cur.pos-1, cur.time+1, cur.cnt});
            q.push({cur.pos+1, cur.time+1, cur.cnt});
            q.push({cur.pos*2, cur.time+1, cur.cnt});
        }
    }
    printf("%d\n%d\n", ans_time, ans_cnt);
}