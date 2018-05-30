#include <iostream>
using namespace std;
int main() {
    int N, M; cin >> N >> M;
    string pass; cin >> pass;
    int pl = pass.length();
    while(M--) {
        string in; cin >> in;
        int i = 0;
        for(char ch: in)
            if(ch == pass[i])
                i++;
        puts(i == pl? "true":"false");
    }
}