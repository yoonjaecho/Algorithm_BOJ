#include <iostream>
#define ll long long
using namespace std;
int main() {
    string a,b; cin >> a >> b;
    ll ans=0,asize=a.size(),bsize=b.size();
    for(int i=0; i<asize; i++) 
        for(int j=0; j<bsize; j++) 
            ans += (a[i]-'0')*(b[j]-'0');
    cout << ans << '\n';
}
