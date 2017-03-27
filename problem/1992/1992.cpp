#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
char m[100][100];
string conquer(string a, string b, string c, string d) {
    bool can_merge = true;
    if(a.compare(b)) can_merge = false;
    if(b.compare(c)) can_merge = false;
    if(c.compare(d)) can_merge = false;
    int zc = count(a.begin(), a.end(), '0');
    int oc = count(a.begin(), a.end(), '1');
    if(zc && oc) can_merge = false;
    if(can_merge) return a;
    else return "(" + a + b + c + d + ")";
}
string divide(int y1, int y2, int x1, int x2) {
    if(y2 - y1 == 1 && x2 - x1 == 1) {
        string part = "";
        bool can_merge = true;
        char a = m[y1][x1];
        char b = m[y1][x2];
        if(a != b) can_merge = false;
        char c = m[y2][x1];
        if(b != c) can_merge = false;
        char d = m[y2][x2];
        if(c != d) can_merge = false;
        if(can_merge) return part + a;
        else return part + "(" + a + b + c + d + ")";
    }
    int midy = (y2 + y1) / 2;
    int midx = (x2 + x1) / 2;
    string a = divide(y1, midy, x1, midx);
    string b = divide(y1, midy, midx + 1, x2);
    string c = divide(midy + 1, y2, x1, midx);
    string d = divide(midy + 1, y2, midx + 1, x2);
    return conquer(a, b, c, d);
}
int main() {
    int n; scanf("%d",&n); getchar();
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            scanf("%c",&m[i][j]);
        getchar();
    }
    cout << divide(1, n, 1, n) << endl;
}
