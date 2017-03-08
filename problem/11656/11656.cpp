#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string line; cin >> line;
    vector<string> v;
    for(int i=0; i<line.size(); i++)
        v.push_back(line.substr(i,line.size()));
    sort(v.begin(),v.end());
    for(auto &x:v)
        cout << x << endl;
}
