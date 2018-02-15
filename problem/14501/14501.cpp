#include <cstdio>
#include <algorithm>
using namespace std;
int N, T[22], P[22], ans;
void dfs(int day, int sum) {
    if(day == N) {
        ans = max(ans, sum);
        return;
    }
    dfs(day + 1, sum);
    if(day + T[day] <= N)
        dfs(day + T[day], sum + P[day]);
}
int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d%d", &T[i], &P[i]);
    dfs(0, 0);
    printf("%d\n", ans);
}