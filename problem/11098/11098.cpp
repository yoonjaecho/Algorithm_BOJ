#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define pp pair<ll, string>
using namespace std;
bool order(const pp &a, const pp &b)
{
    return a.first > b.first;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int n;
        ll money;
        string man;
        vector<pp> v;
        scanf("%d",&n);
        while(n--) {
            cin >> money >> man;
            v.push_back(make_pair(money,man));
        }
        sort(v.begin(),v.end(),order);
        cout << v[0].second << '\n';
    }
}
