#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int ice[211], ans;
bool flag[211][211];

int main() {
    int N, M; scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++) {
        int a, b; scanf("%d %d", &a, &b);
        flag[a][b] = flag[b][a] = 1;
    }

    for (int i = 1; i <= N; i++)
        ice[i] = i;

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (flag[i][j]) continue;
            for (int k = j + 1; k <= N; k++) {
                if (flag[i][k] || flag[j][k]) continue;
                ans++;
            }
        }
    }

    printf("%d\n", ans);
}