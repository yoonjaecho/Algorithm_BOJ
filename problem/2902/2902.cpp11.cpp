#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string in,token;
    cin >> in;
    istringstream iss(in);
    while(getline(iss, token, '-'))
        cout << token[0];
}
