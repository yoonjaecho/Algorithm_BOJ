#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin >> a >> b;
    int minA,maxA,minB,maxB;
    minA = maxA = minB = maxB = 0;
    for(int i=0; i<a.size(); i++) {
        if(a[i] == '5' || a[i] == '6') {
            minA += 5;
            maxA += 6;
        } else {
            minA += a[i]-'0';
            maxA += a[i]-'0';
        }
        if(i != a.size()-1) {
            minA *= 10;
            maxA *= 10;
        }
    }
    for(int i=0; i<b.size(); i++) {
        if(b[i] == '5' || b[i] == '6') {
            minB += 5;
            maxB += 6;
        } else {
            minB += b[i]-'0';
            maxB += b[i]-'0';
        }
        if(i != b.size()-1) {
            minB *= 10;
            maxB *= 10;
        }
    }
    printf("%d %d\n",minA+minB,maxA+maxB);
}
