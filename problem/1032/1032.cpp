#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    string ans;
    cin >> ans;
    n--;
    while(n--) {
        string line;
        cin >> line;
        for(int i=0; i<line.size(); i++) {
            if(ans[i] == line[i]) continue;
            else ans[i] = '?'; 
        }
    }
    cout << ans << endl;
}
