#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#define tp tuple<string, int, int ,int>
using namespace std;
bool order(const tp &t1, const tp &t2)
{
    if(get<1>(t1) > get<1>(t2))
        return true;
    else if(get<1>(t1) == get<1>(t2)) {
        if(get<2>(t1) < get<2>(t2))
            return true;
        else if(get<2>(t1) == get<2>(t2)) {
            if(get<3>(t1) > get<3>(t2))
                return true;
            else if(get<3>(t1) == get<3>(t2)) {
                return get<0>(t1).compare(get<0>(t2)) < 0;
            } else return false;
        } else return false;
    } else return false;
}
int main()
{
    int n;
    cin.sync_with_stdio(false);
    vector<tp> v;
    cin >> n;
    while(n--) {
        string name;
        int a,b,c;
        cin >> name >> a >> b >> c;
        v.push_back(make_tuple(name,a,b,c));
    }
    sort(v.begin(),v.end(),order);
    for(auto &x :v) {
        cout << get<0>(x) << "\n";
    }
}
