#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int n,cnt=0; cin >> n;
    map<string, int> m;
    string ans;
    while(n--) {
        string name; cin >> name;
        m[name]++;
    }
    for(auto &x:m) {
        if(cnt <= x.second) {
            cnt = x.second;
            ans = x.first;
        }
    }
    cout << ans << ' ' << cnt << '\n';
}
