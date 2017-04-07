#include <iostream>
#include <cstring>
using namespace std;
bool check[27];
int n,m;
int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        string in; cin >> in;
        memset(check,0,sizeof(check));
        char before;
        for(int i=0; i<in.size(); i++) {
            if(i) if(in[i] == before) continue;
            int j = in[i] - 96;
            if(check[j]) {
                m++;
                break;
            }
            check[j] = 1;
            before = in[i];
        }
    }
    cout << n-m << endl;
}
