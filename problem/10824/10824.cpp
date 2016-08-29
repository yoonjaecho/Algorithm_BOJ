#include <iostream>
#include <string>
#define ll long long 
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(c) + to_string(d);
    ll l1 = stoll(s1);
    ll l2 = stoll(s2);
    cout << l1 + l2 << '\n';
}
