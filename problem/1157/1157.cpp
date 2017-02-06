#include <iostream>
using namespace std;
int cnt[123];
int main() {
    string line;
    cin >> line;
    for(int i=0; i<line.size(); i++) {
        if(line[i] > 90) line[i] -= 32;
        cnt[line[i]]++;
    }
    int max = -1, cur = 0, idx;
    for(int i=65; i<=90; i++) {
        if(max < cnt[i]) {
            max = cnt[i];
            idx = i;
            cur = 1;
        } else if(max == cnt[i])
            cur++;
    }
    if(cur != 1) puts("?");
    else printf("%c\n",idx);
}
