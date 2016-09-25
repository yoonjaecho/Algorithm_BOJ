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
    int tc;
    scanf("%d",&tc);
    cin.ignore();
    while(tc--) {
        string in,ans="god";
        getline(cin,in);
        vector<string> v = split(in,' ');
        for(int i=1; i<v.size(); i++)
            ans += v[i];
        cout << ans << endl;
    }

}
