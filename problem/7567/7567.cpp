#include <iostream>
using namespace std;

int main() {
    string line;
    int ans = 0;
    char before = '*'; 
    cin >> line;
    for(int i=0; i<line.size(); i++) {
        char top = line[i];
        if(top != before) {
            ans += 10;
            before = top;
        } else {
            ans += 5;
        }
    }
    printf("%d\n",ans);
}
