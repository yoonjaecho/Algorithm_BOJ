#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
char vowel[5] = {'a','e','i','o','u'};
int main() {
    vector<char> v;
    string in;
    getline(cin,in);
    for(int i=0; i<in.size(); i++) {
        char ch = in[i];
        bool found = false;
        for(int j=0; j<5; j++) {
            if(vowel[j] ==
                    ch) {
                found
                    =
                    true;
                break;
            }
        }
        v.push_back(ch);
        if(found) i +=
            2;
    }
    for(int i=0; i<v.size(); i++)
        cout << v[i];
}
