#include <cstdio>

using namespace std;

int N, M, x, y, K;
int map[22][22];
int dice[6];
int dx[5] = {0, 0, 0, -1, 1};
int dy[5] = {0, 1, -1, 0, 0};

bool check_border(int ny, int nx) {
    return 0 <= nx && nx < N && 0 <= ny && ny < M;
}

void update(int index) {
    if (map[x][y] == 0)
        map[x][y] = dice[index];
    else {
        dice[index] = map[x][y];
        map[x][y] = 0;
    }
}

int main() {
    scanf("%d %d %d %d %d", &N, &M, &x, &y, &K);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &map[i][j]);

    while (K--) {
        int dir; scanf("%d", &dir);
        
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!check_border(ny, nx))
            continue;
        
        y = ny;
        x = nx;

        if (dir == 1) {
            update(1);
            printf("%d\n", dice[2]);
            int temp = dice[5];
            dice[5] = dice[2];
            dice[2] = dice[0];
            dice[0] = dice[1];
            dice[1] = temp;
        } else if (dir == 2) {
            update(2);
            printf("%d\n", dice[1]);
            int temp = dice[5];
            dice[5] = dice[1];
            dice[1] = dice[0];
            dice[0] = dice[2];
            dice[2] = temp;
        } else if (dir == 3) {
            update(4);
            printf("%d\n", dice[3]);
            int temp = dice[5];
            dice[5] = dice[3];
            dice[3] = dice[0];
            dice[0] = dice[4];
            dice[4] = temp;
        } else if (dir == 4) {
            update(3);
            printf("%d\n", dice[4]);
            int temp = dice[5];
            dice[5] = dice[4];
            dice[4] = dice[0];
            dice[0] = dice[3];
            dice[3] = temp;
        }
    }
}