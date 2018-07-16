#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int X[10][4][4], C[10][4][4];
int get_score(int xx[5][5], int cc[5][5]) {
    int score = 0;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            score += xx[i][j] * cc[i][j];
    return score;
}
void update_xx(int xx[5][5], int X[4][4], int xi, int xj) {
    for(int i=0; i<4; i++) for(int j=0; j<4; j++) {
        int &val = xx[xi + i][xj + j];
        val += X[i][j];
        if(val < 0) val = 0;
		if(val > 9) val = 9;
    }
}
void update_cc(int cc[5][5], int X[4][4], int xi, int xj) {
    for(int i=0; i<4; i++) for(int j=0; j<4; j++) {
        int &val = cc[xi + i][xj + j];
        if(X[i][j]) val = X[i][j];
    }
}
int update(int AX[4][4], int AC[4][4], int BX[4][4], int BC[4][4], int CX[4][4], int CC[4][4]) {
    int xx[5][5], cc[5][5];
    int ans = -1e9;
    for(int ai=0; ai<2; ai++) for(int aj=0; aj<2; aj++) {
        for(int bi=0; bi<2; bi++) for(int bj=0; bj<2; bj++) {
            for(int ci=0; ci<2; ci++) for(int cj=0; cj<2; cj++) {
                memset(xx, 0, sizeof(xx));
                update_xx(xx, AX, ai, aj);
                update_xx(xx, BX, bi, bj);
                update_xx(xx, CX, ci, cj);
                memset(cc, 0, sizeof(cc));
                update_cc(cc, AC, ai, aj);
                update_cc(cc, BC, bi, bj);
                update_cc(cc, CC, ci, cj);
                int val = get_score(xx, cc);
                ans = max(ans, val);
            }
        }
    }
    return ans;
}
void rotate(int arr[4][4]) {
    int temp[4][4];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            temp[i][j] = arr[i][j];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            arr[i][j] = temp[j][3 - i];  
}
int make_bomb(int AX[4][4], int AC[4][4], int BX[4][4], int BC[4][4], int CX[4][4], int CC[4][4]) {
    int ans = -1e9;
    for(int a=0; a<4; a++) {
        rotate(AX);
        rotate(AC);
        for(int b=0; b<4; b++) {
            rotate(BX);
            rotate(BC);
            for(int c=0; c<4; c++) {
                rotate(CX);
                rotate(CC);
                int val = update(AX, AC, BX, BC, CX, CC);
                ans = max(ans, val);
            }
        }
    }
    return ans;
}
int main() {
    int fmap[128]; fmap['W'] = 0; 
    fmap['R'] = 7; fmap['B'] = 5;
    fmap['G'] = 3; fmap['Y'] = 2;
    int N; scanf("%d", &N);
    for(int i=0; i<N; i++) {
        for(int j=0; j<4; j++) for(int k=0; k<4; k++) 
            cin >> X[i][j][k];
        for(int j=0; j<4; j++) for(int k=0; k<4; k++) {
            char color[11]; cin >> color;
            C[i][j][k] = fmap[color[0]];
        }
    }
    int ans = -1e9;
    for(int a=0; a<N; a++)
        for(int b=0; b<N; b++) if(a != b) {
            for(int c=0; c<N; c++) if(c != a && c != b) {
                int val = make_bomb(X[a], C[a], X[b], C[b], X[c], C[c]);
                ans = max(ans, val);
            }
        }
    printf("%d\n", ans);
}