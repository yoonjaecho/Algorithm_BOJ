#include <iostream>
#include <sstream>
#include <vector>
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
    int t; cin >> t; cin.ignore();
    for(int tc=1; tc<=t; tc++) {
        string in; getline(cin,in);
        vector<string> v = split(in,' ');
        printf("Case #%d: ",tc);
        for(int i=v.size()-1; i>=0; i--)
            cout << v[i] << " ";
        puts("");
    }
}
