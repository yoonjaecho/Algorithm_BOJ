#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string str,cmp;
    int n;
    scanf("%d",&n);
    cin >> str >> cmp;
    bool check = true;
    if(n&1) {
        for(int i=0; i<str.size(); i++) {
            if(str[i] == cmp[i]) {
                check = false;
                break;
            }
        }
    } else {
        for(int i=0; i<str.size(); i++) {
            if(str[i] != cmp[i]) {
                check = false;
                break;
            }
        }
    }
    if(check) cout << "Deletion succeeded" << '\n';
    else cout << "Deletion failed" << '\n';
}
