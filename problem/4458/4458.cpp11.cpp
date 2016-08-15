#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string str;
    cin >> n;
    getline(cin,str);
    while(n--) {
        getline(cin,str);
        if(str[0] >= 97) str[0] -= 32;
        cout << str << endl;
    }
}

