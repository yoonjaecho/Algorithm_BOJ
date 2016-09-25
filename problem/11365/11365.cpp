#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string in;
    while(1) {
        getline(cin,in);
        if(!in.compare("END")) return 0;
        reverse(in.begin(), in.end());
        cout << in << endl;
    }

}
