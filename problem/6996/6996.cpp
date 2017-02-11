#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str,cmp;
    int tc;
    cin >> tc; cin.ignore();
    while(tc--) {
        cin >> str >> cmp;
        string ori = str, gin = cmp;
        sort(str.begin(), str.end());
        sort(cmp.begin(), cmp.end());
        if(!str.compare(cmp))
            cout << ori << " & " << gin << " are anagrams." << '\n';
        else
            cout << ori << " & " << gin << " are NOT anagrams." << '\n';
    }
}
