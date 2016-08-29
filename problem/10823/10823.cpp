#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string s,line;
    int sum = 0;
    while(cin>>line) s+=line;
    istringstream sin(s);
    while(getline(sin,line,',')) sum += stoi(line);
    printf("%d\n",sum);
}


