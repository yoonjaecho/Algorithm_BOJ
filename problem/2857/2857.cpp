#include <iostream>
using namespace std;
string a[6]; bool c[6];
int main() {
    for(int i=1; i<=5; i++) {
        getline(cin, a[i]);
        int sp = 0;
        while(sp <= a[i].size()) {
            if(a[i][sp] == 'F') {
                sp++;
                if(a[i][sp] == 'B') {
                    sp++;
                    if(a[i][sp] == 'I') {
                        sp++;
                        c[i] = 1;
                    }
                }
            }
            sp++;
        }
    }
    int cnt = 0;
    for(int i=1; i<=5; i++) {
        if(c[i]) {
            cnt++;
            printf("%d ",i);
        }
    }
    if(!cnt) puts("HE GOT AWAY!");
}
