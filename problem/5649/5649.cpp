#include <cstdio>
#include <vector>
using namespace std;
int A[1001][2];
int B[1001][1];
int AT[2][1001];
int ATA[2][2];
int ATA_IN[2][2];
int temp[2][1001];
double ans[2][1];
int main() {
    int M; scanf("%d",&M);
    int sq_sum = 0, sum = 0;
    for(int i=0; i<M; i++) {
        int x,y; scanf("%d%d",&x,&y);
        A[i][0] = x;
        A[i][1] = 1;
        B[i][0] = y;
        AT[0][i] = x;
        AT[1][i] = 1;
        sq_sum += x*x;
        sum += x;
    }
    ATA[0][0] = sq_sum;
    ATA[0][1] = ATA[1][0] = sum;
    ATA[1][1] = M;
    double det = ATA[0][0]*ATA[1][1]-ATA[0][1]*ATA[1][0];
    ATA_IN[0][0] = ATA[1][1];
    ATA_IN[1][1] = ATA[0][0];
    ATA_IN[0][1] = ATA_IN[1][0] = -ATA[0][1];
    for(int i=0; i<2; i++)
        for(int j=0; j<M; j++)
            for(int k=0; k<2; k++)
                temp[i][j] += ATA_IN[i][k] * AT[k][j];
    for(int i=0; i<2; i++)
        for(int j=0; j<1; j++)
            for(int k=0; k<M; k++)
                ans[i][j] += temp[i][k] * B[k][j];
    printf("%.3lf\n%.3lf\n", ans[0][0]/det, ans[1][0]/det);
}
