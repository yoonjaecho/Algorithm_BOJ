#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
struct Serial {
    string s;
    int size;
    int sum;
    Serial(string _s)
        :s(_s)
    {
        size = s.size();
        sum = 0;
        for(int i=0; i<_s.size(); i++) {
            if('1' <= _s[i] && _s[i] <= '9')
                sum += _s[i] - '0';
        }
    }
    bool operator<(const Serial &rhs) const {
        if(size == rhs.size) {
            if(sum == rhs.sum) {
                return s.compare(rhs.s) < 0;
            } else return sum < rhs.sum;
        } else return size < rhs.size;
    }
};
int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<Serial> v;
    while(n--) {
        string str;
        getline(cin, str);
        v.push_back(Serial(str));
    }
    sort(v.begin(), v.end());
    for(auto &x : v)
        cout << x.s << endl;
}
