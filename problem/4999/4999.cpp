#include <iostream>
using namespace std;
int main()
{
    string in;
    int a,b;
    cin >> in;
    a = in.size();
    cin >> in;
    b = in.size();
    printf("%s",a>=b? "go":"no");
}
