#include <cstdio>
#include <cstring>
#include <queue>
#define MAX 100000
using namespace std;
int N, K;
int times[MAX+1];
int main() {
    memset(times, -1, sizeof(times));
    scanf("%d%d", &N, &K);
    queue<int> q;
    if(N == 0) { 
        times[N] = 0;
        q.push(N);
    } else {
        for(int i=N; i<MAX+1; i<<=1) {
            times[i] = 0;
            q.push(i);
        }
    }
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        if(cur == K) break;
        if(cur < 0 || MAX < cur) continue;
        if(cur != 0) {
            for(int i=cur<<1; i<MAX+1; i<<=1) {
                if(times[i] == -1) {
                    times[i] = times[cur];
                    q.push(i);
                } else break;
            }
        }
        if(times[cur-1] == -1) {
            times[cur-1] = times[cur] + 1;
            q.push(cur-1);
        }
        if(times[cur+1] == -1) {
            times[cur+1] = times[cur] + 1;
            q.push(cur+1);
        }
    }
    printf("%d\n", times[K]);
}