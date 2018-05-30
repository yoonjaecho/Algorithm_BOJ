#include <cstdio>
int main() {
    int N, K, sum = 0; scanf("%d%d", &N, &K);
    for(int i=1; i<=K; i++) {
        int in; scanf("%d", &in);
        sum += in / 2;
        sum += in & 1? 1:0;
    }
    puts(sum - N < 0? "NO":"YES");
}