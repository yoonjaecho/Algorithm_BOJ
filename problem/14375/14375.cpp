#include <iostream>
using namespace std;
int main() {
    int TC; scanf("%d",&TC);
    for(int tc=1; tc<=TC; tc++) {
        string in, ans = ""; cin >> in;
        for(int i=0; i<in.size(); i++) 
            ans = ans+in[i] > in[i]+ans? ans+in[i]:in[i]+ans;
        printf("Case #%d: ",tc);
        cout << ans << '\n';
    }
}
