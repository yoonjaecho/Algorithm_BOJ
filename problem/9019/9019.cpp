#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
struct tup {
    int num;
    string ans;
};
bool check[10011];
int D(int n) {
    return (n*2) % 10000;
}
int S(int n) {
    return n-1 < 0? 9999:n-1;
}
int L(int n) {
    int d1 = n / 1000;
    n %= 1000;
    return n*10 + d1;
}
int R(int n) {
    int d4 = n % 10;
    n /= 10;
    return d4*1000 + n;
}
int main() {
    int tc; cin >> tc;
    while(tc--) {
        memset(check, 0, sizeof(check));
        int a, b; cin >> a >> b;
        queue<tup> q;
        q.push({a, ""});
        tup cur;
        while(!q.empty()) {
            cur = q.front(); q.pop();
            int n = cur.num;
            if(n == b) break;
            if(!check[D(n)]) {
                check[D(n)] = 1;
                q.push({(D(n)), cur.ans + "D"});
            }
            if(!check[S(n)]) {
                check[S(n)] = 1;
                q.push({(S(n)), cur.ans + "S"});
            }
            if(!check[L(n)]) {
                check[L(n)] = 1;
                q.push({(L(n)), cur.ans + "L"});
            }
             if(!check[R(n)]) {
                check[R(n)] = 1;
                q.push({(R(n)), cur.ans + "R"});
            }
        }
        cout << cur.ans << endl;
    }
}