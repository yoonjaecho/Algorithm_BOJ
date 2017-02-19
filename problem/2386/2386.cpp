#include <iostream>
#include <string>
using namespace std;
int main() {
    string line;
    while(1) {
        getline(cin, line);
        if(!line.compare("#")) break;
        char ch = line[0];
        int ans = 0;
        for(int i=2; i<line.size(); i++) 
            if(tolower(line[i]) == ch) ans++;
        printf("%c %d\n",ch,ans);
    }
}
