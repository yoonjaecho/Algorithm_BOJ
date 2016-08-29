#include <iostream>
#include <string>
using namespace std;
int main() {
    string in;
    int sum = 0;
    while(getline(cin,in,',')) sum += stoi(in);
    printf("%d\n",sum);
}

