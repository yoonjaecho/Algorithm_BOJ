#include <iostream>
#include <map>
#define ll long long
using namespace std;
struct Color {
    int value;
    int gop;
};
int main() {
    map<string,Color> m;
    m["black"] = {0,1};
    m["brown"] = {1,10};
    m["red"] = {2,100};
    m["orange"] = {3,1000};
    m["yellow"] = {4,10000};
    m["green"] = {5,100000};
    m["blue"] = {6,1000000};
    m["violet"] = {7,10000000};
    m["grey"] = {8,100000000};
    m["white"] = {9,1000000000};
    ll ans = 0;
    string line;
    cin >> line;
    ans += m[line].value * 10;
    cin >> line;
    ans += m[line].value;
    cin >> line;
    ans *= m[line].gop;
    printf("%lld\n",ans);
}
