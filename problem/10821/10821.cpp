#include <iostream>
using namespace std;
int main()
{
    int ans=1;
    string in;
    cin >> in;
    for(int i=0; i<in.size(); i++) 
        if(in[i] == ',') ans++;
    cout << ans << "\n";
}
