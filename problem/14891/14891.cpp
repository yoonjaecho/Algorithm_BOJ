#include <cstdio>
#include <cstring>
int ring[4][8];
bool check[4];
void cw(int num) {
    int temp = ring[num][7];
    for(int i=7; i>=1; i--)
        ring[num][i] = ring[num][i - 1];
    ring[num][0] = temp;
}
void ccw(int num) {
    int temp = ring[num][0];
    for(int i=0; i<=6; i++)
        ring[num][i] = ring[num][i + 1];
    ring[num][7] = temp;
}
void go(int num, int dir) {
    check[num] = 1;
    if(num - 1 >= 0) // left
        if(ring[num - 1][2] != ring[num][6] && !check[num - 1])
            go(num - 1, -dir);
    if(num + 1 <= 3) // right
        if(ring[num + 1][6] != ring[num][2] && !check[num + 1])
            go(num + 1, -dir);
    dir == 1? cw(num):ccw(num);
}
int main() {
    for(int i=0; i<4; i++)
        for(int j=0; j<8; j++)
            scanf("%1d", &ring[i][j]);
    int K; scanf("%d", &K);
    while(K--) {
        int num, dir; scanf("%d%d", &num, &dir);
        memset(check, 0, sizeof(check));
        go(num - 1, dir);
    }
    int val = 1, ans = 0;
    for(int i=0; i<4; i++) {
        if(ring[i][0])
            ans += val;
        val *= 2;
    }
    printf("%d\n", ans);
}