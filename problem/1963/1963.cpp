#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
#define MAX 10000
#define PII pair<int, int>
using namespace std;
bool p[MAX + 1], check[MAX + 1];
queue<PII> q;
void conversion(int num, int cnt, int base) {
    int carry = (num / (base * 10)) % 10;
    int tmp = num;
    for(int i=0; i<9; i++) {
        tmp += base;
        if(carry != (tmp / (base * 10)) % 10)
            tmp -= base * 10;
        if(p[tmp] && !check[tmp] && tmp >= 1000) {
            check[tmp] = 1;
            q.push({tmp, cnt + 1});
        }
    }
}
int main() {
    for(int i=2; i<MAX; i++)
        p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    int T; scanf("%d", &T);
    while(T--) {
        int a, b, ans = 1e9; scanf("%d%d", &a, &b);
        memset(check, 0, sizeof(check));
        q.push({a, 0});
        while(!q.empty()) {
            PII cur = q.front(); q.pop();
            int num = cur.first, cnt = cur.second;
            if(num == b) ans = min(ans, cnt);
            else for(int i=1; i<=1000; i*=10)
                conversion(num, cnt, i);   
        }
        printf("%d\n", ans);
    }
}