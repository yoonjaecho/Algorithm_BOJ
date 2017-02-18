#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a,op,b,ans = "1";
    cin >> a >> op >> b;
    int asize = a.size(), bsize = b.size();
    if(!op.compare("+")) {
        if(!a.compare("1") && !b.compare("1"))
            ans = "2";
        else {
            if(asize == bsize) ans = "2";
            int MIN = min(asize,bsize);
            int MAX = max(asize,bsize);
            for(int i=1; i<MAX; i++)
                ans += "0";
            if(asize != bsize)
                ans[ans.size()-MIN] = '1';
        }
    } else {
        int size = asize + bsize - 2;
        for(int i=0; i<size; i++)
            ans += "0";
    }
    cout << ans << '\n';
}
