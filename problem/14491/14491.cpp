#include <iostream>
using namespace std;
string t = "012345678";
string conv(int n, int base) {
    int q = n / base;
    int r = n % base;
    string ret = to_string(t[r]-'0');
    return (!q)? ret : conv(q, base) + ret;
}
int main() {
    int t; cin >> t;
    cout << conv(t,9) << endl;
}
