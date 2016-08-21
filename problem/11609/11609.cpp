#include <iostream>
#include <vector>
#include <algorithm>
#define ps pair<string, string>
using namespace std;
bool order(const ps &a, const ps &b) {
    if(a.second < b.second) return true;
    else if (a.second == b.second) {
        if(a.first <= b.first) return true;
        else return false;
    } else return false;
}
int main()
{
    int tc;
    string first,last;
    vector<pair<string, string>> v;
    scanf("%d\n",&tc);
    while(tc--) {
        cin >> first >> last;
        v.push_back(make_pair(first,last));
    }
    sort(v.begin(),v.end(),order);
    for(auto &x:v) cout << x.first << " " <<  x.second << endl;
}
