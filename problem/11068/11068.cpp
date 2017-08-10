#include <iostream>
#include <cstring>
using namespace std;
int number[111];
int convert2b(int n, int b) {
    int ret = 0;
    while(n > 0) {
        number[ret++] = n%b;
        n /= b;
    }
    return ret;
}
bool is_palidrome(int end_index) {
    for(int i=0, j=end_index-1; i<j; i++,j--)
        if(number[i] != number[j])
            return false;
    return true;
}
int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        bool exist = 0;
        for(int i=2; i<=64; i++) {
            memset(number, 0, sizeof(number));
            int end_index = convert2b(n, i);
            if(is_palidrome(end_index)) {
                exist = 1;
                break;
            }
        }
        puts(exist? "1":"0");
    }
}