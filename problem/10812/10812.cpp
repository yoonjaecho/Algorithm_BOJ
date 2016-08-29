#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> v(n,0);
    for(int i=0; i<n; i++) v[i] = i+1;
    while(m--) {
        int b,e,m;
        cin >> b >> e >> m;
        rotate(v.begin()+b-1,v.begin()+m-1,v.begin()+e);
    }
    for(int i=0; i<n; i++) printf("%d ",v[i]);
}
