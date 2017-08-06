#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define PI pair<int, string>
bool check[90000000];
queue<PI> q;
int main() {
    int n,k,in; cin >> n >> k;
    string line = "", ans; 
    for(int i=0; i<n; i++) {
        cin >> in;
        line += in + '0';
    }
    ans = line;
    sort(ans.begin(), ans.end());
    q.push({0,line});
    while(!q.empty()) {
        PI cur = q.front(); q.pop();
        if(cur.second == ans) {
            cout << cur.first << endl;
            return 0;
        }
        for(int i=0; i<=n-k; i++) {
            string str = cur.second;
            int cnt = 0;
            for(int l=i, r=i+k-1; l<r; l++,r--) {
                char temp = str[l];
                str[l] = str[r];
                str[r] = temp;
            }
            int status = stoi(str);
            if(check[status]) continue;
            else {
                check[status] = 1;
                q.push({cur.first+1, str});
            }
        }
    }
    puts("-1");
}
