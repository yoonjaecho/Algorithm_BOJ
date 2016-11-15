#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    int k,l;
    cin >> k >> l;
    map<string, int> m;
    vector<pair<int,string>> v;
    for(int i=0; i<l; i++) {
        string id;
        cin >> id;
        m[id] = i;
    }
    for(auto it=m.begin(); it!=m.end(); it++)
        v.push_back({it->second,it->first});
    sort(v.begin(), v.end());
    int cnt = 0;
    for(auto &x : v) {
        if(cnt++ < k)
            cout << x.second << "\n";
        else break;
    }
}
