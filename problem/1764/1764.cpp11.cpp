#include <cstdio>
#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n,m;
    string str;
    scanf("%d %d",&n,&m);
    set<string> noListen,ans;
    for(int i=0; i<n; i++) {
        cin >> str;
        noListen.insert(str);
    }
    for(int i=0; i<m; i++) {
        cin >> str;
        if(noListen.find(str) != noListen.end()) ans.insert(str);
    }
    printf("%d\n",ans.size());
    for(auto &x:ans) cout << x << endl;
}
