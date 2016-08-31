#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct P {
    int age;
    string name;
    int join;
};
int main()
{
    int n;
    cin >> n;
    vector<P> v(n);
    for(int i=0; i<n; i++) {
        int age;
        string name;
        cin >> v[i].age >> v[i].name;
        v[i].join = i;
    }
    sort(v.begin(), v.end(), [](P u, P v) {
        return (u.age < v.age) || (u.age == v.age && u.join < v.join);
            });
    for(auto &x:v) cout << x.age << ' ' << x.name << '\n';
}
