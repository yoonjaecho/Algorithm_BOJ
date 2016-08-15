#include <iostream>
using namespace std;
int main()
{
    string in;
    int n;
    cin >> n;
    while(n--) {
        cin >> in;
        cout << in[0] << in[in.size()-1] << endl;
    }
}
