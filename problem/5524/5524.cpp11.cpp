#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string in;
    scanf("%d",&n);
    while(n--) {
        cin >> in;
        transform(in.begin(),in.end(),in.begin(),::tolower);
        cout << in << endl;
    }
}
