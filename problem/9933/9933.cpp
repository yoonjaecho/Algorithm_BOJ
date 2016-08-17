#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    cin.sync_with_stdio(false);
    int n;
    string in;
    set<string> s;
    cin >> n;
    while(n--) {
        cin >> in;
        s.insert(in);
    }
    for(auto &x: s) {
        in = x;
        reverse(in.begin(), in.end());
        for(auto &y: s) {
            if(!in.compare(y)) {
                cout << in.size() << " " << in[in.size()/2] << "\n";
                return 0;
            }
        }
    }
}
         
