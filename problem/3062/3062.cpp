#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
    int tc; cin >> tc;
    while(tc--) {
        string a,b; cin >> a;
        int value = atoi(a.c_str());
        reverse(a.begin(),a.end());
        value += atoi(a.c_str());
        b = a = to_string(value);
        reverse(a.begin(),a.end());
        if(!b.compare(a)) puts("YES");
        else puts("NO");
    }
}
