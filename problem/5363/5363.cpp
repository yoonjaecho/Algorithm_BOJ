#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while(getline(ss, item, delim))
        tokens.push_back(item);
    return tokens;
}
int main() {
    int tc; cin >> tc; cin.ignore();
    while(tc--) {
        string in; getline(cin, in);
        vector<string> v = split(in,' ');
        v.push_back(v[0]); v.push_back(v[1]);
        v.erase(v.begin(),v.begin()+2);
        for(string s : v)
            cout << s << ' ';
        puts("");
    }
}
