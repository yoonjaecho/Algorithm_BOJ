#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<string, int, greater<string>> m;
int main() {
    int n; cin >> n;
    while(n--) {
        string name, query;
        cin >> name >> query;
        if(query == "enter")
            m[name] = 1;
        else m[name] = 0;
    }
    for(auto &x:m)
        if(x.second)
            cout << x.first << endl;
}
