#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
bool check[333][333];
int dy[8] = {1,2,2,1,-1,-2,-2,-1};
int dx[8] = {-2,-1,1,2,2,1,-1,-2};
int n;
struct PP {
    int y,x,cnt;
};
bool in_bound(int ny, int nx) {
    return (0 <= nx && nx < n && 0 <= ny && ny < n);
}
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        scanf("%d",&n);
        memset(check, 0, sizeof(check));
        int sty,stx,dsty,dstx;
        queue<PP> q;
        scanf("%d%d%d%d",&sty,&stx,&dsty,&dstx);
        if(sty == dsty && stx == dstx) {
            puts("0");
            continue;
        }
        q.push({sty,stx,0});
        while(!q.empty()) {
            PP p = q.front(); q.pop();
            int cy = p.y, cx = p.x, ccnt = p.cnt;
            bool found = false;
            for(int i=0; i<8; i++) {
                int ny = cy + dy[i];
                int nx = cx + dx[i];
                if(in_bound(ny, nx) && !check[ny][nx]) {
                    if(ny == dsty && nx == dstx) {
                        printf("%d\n",ccnt+1);
                        found = true;
                        break;
                    }
                    check[ny][nx] = 1;
                    q.push({ny,nx,ccnt+1});
                }
            }
            if(found) break;
        }
    }
}
