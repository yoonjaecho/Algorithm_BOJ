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
int main()
{
    int n;
    cin >> n;
    while(n--) {
        string in;
        cin >> in;
        if(!in.compare("P=NP")) {
            puts("skipped");
            continue;
        }
        vector<string> v = split(in,'+');
        int ans = atoi(v[0].c_str()) + atoi(v[1].c_str());
        cout << ans << "\n"; 
    }
}
