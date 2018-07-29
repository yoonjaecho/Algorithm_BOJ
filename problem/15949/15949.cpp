#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int DPX[4] = {1, 0, -1, 0};
int DPY[4] = {0, 1, 0, -1};
int dp_turn = 0, cc_turn = 0, dp_cnt = 0;
int N, M;
char mapp[111][111];
bool check[111][111];

struct Codel {
    int y, x;
};

vector<Codel> same_codel;

void dfs(Codel cur) {
    same_codel.push_back({cur.y, cur.x});
    check[cur.y][cur.x] = 1;
    for(int i=0; i<4; i++) {
        char color = mapp[cur.y][cur.x];
        int ny = cur.y + DPY[i];
        int nx = cur.x + DPX[i];
        if(1 <= ny && ny <= N && 1 <= nx && nx <= M) {
            if(!check[ny][nx] && color == mapp[ny][nx]) {
                dfs(Codel({ny, nx}));
            }
        }
    }
}

vector<Codel> codel_check(Codel start) {
    memset(check, 0, sizeof(check));
    same_codel.clear();

    dfs(start);

    return same_codel;
}

Codel find_last_codel(vector<Codel> v) { // O(2N)
    int max_x = -1e9, max_y = -1e9;
    int min_x = 1e9, min_y = 1e9;
    for(int i=0; i<v.size(); i++) {
        max_x = max(max_x, v[i].x);
        max_y = max(max_y, v[i].y);
        min_x = min(min_x, v[i].x);
        min_y = min(min_y, v[i].y);
    }

    int last_x = 0, last_y = 0;

    if(dp_turn == 0) { // max x
        last_x = max_x;
        min_y = 1e9, max_y = -1e9;
        for(int i=0; i<v.size(); i++) {
           if(last_x == v[i].x) {
                min_y = min(min_y, v[i].y);
                max_y = max(max_y, v[i].y);
           }
        }
        last_y = cc_turn == 0? min_y:max_y;
    } else if(dp_turn == 1) { // max y
        last_y = max_y;
        min_x = 1e9, max_x = -1e9;
        for(int i=0; i<v.size(); i++) {
           if(last_y == v[i].y) {
                min_x = min(min_x, v[i].x);
                max_x = max(max_x, v[i].x);
           }
        }
        last_x = cc_turn == 0? max_x:min_x;
    } else if(dp_turn == 2) { // min x
        last_x = min_x;
        min_y = 1e9, max_y = -1e9;
        for(int i=0; i<v.size(); i++) {
           if(last_x == v[i].x) {
                min_y = min(min_y, v[i].y);
                max_y = max(max_y, v[i].y);
           }
        }
        last_y = cc_turn == 0? max_y:min_y;
    } else if(dp_turn == 3) { // min y
        last_y = min_y;
        min_x = 1e9, max_x = -1e9;
        for(int i=0; i<v.size(); i++) {
           if(last_y == v[i].y) {
                min_x = min(min_x, v[i].x);
                max_x = max(max_x, v[i].x);
           }
        }
        last_x = cc_turn == 0? min_x:max_x;
    }

    return Codel({last_y, last_x});
}

int main() {
    scanf("%d %d", &N, &M);
    getchar();
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            scanf("%c", &mapp[i][j]);
        }
        getchar();
    }

    Codel start = Codel({1, 1});
    printf("%c", mapp[1][1]);
    while(1) {
        vector<Codel> v = codel_check(start);
        Codel last_codel = find_last_codel(v);
        int ny = last_codel.y + DPY[dp_turn];
        int nx = last_codel.x + DPX[dp_turn];
        if(mapp[ny][nx] == 'X' || !(1 <= ny && ny <= N && 1 <= nx && nx <= M)) { // invalid
            cc_turn = (cc_turn + 1) % 2;
            last_codel = find_last_codel(v);
            ny = last_codel.y + DPY[dp_turn];
            nx = last_codel.x + DPX[dp_turn];
            if(mapp[ny][nx] == 'X' || !(1 <= ny && ny <= N && 1 <= nx && nx <= M)) { // invalid
                if(dp_cnt == 4) {
                    printf("\n");
                    return 0;
                }
                dp_turn = (dp_turn + 1) % 4;
                dp_cnt++;
            } else {
                printf("%c", mapp[ny][nx]);
                start = Codel({ny, nx});
                dp_cnt = 0;
            }
        } else {
            printf("%c", mapp[ny][nx]);
            start = Codel({ny, nx});
            dp_cnt = 0;
        }
    }

	return 0;
}