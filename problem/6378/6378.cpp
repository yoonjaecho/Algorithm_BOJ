#include <iostream>
#include <cstdlib>
#include <cstring>
#define ll long long
using namespace std; int main() {
    string line;
    cin >> line;
    cin.ignore();
    while(line.compare("0")) {
        ll r = 0;
        int sp = line.size() - 1;
        while(sp != -1) {
            r += line[sp] - '0';
            sp--;
            if(sp == -1 && r >= 10) {
                line = to_string(r);
                r = 0;
                sp = line.size() - 1;
            }
        }
        printf("%lld\n",r);
        cin >> line;
        cin.ignore();
    }
}
