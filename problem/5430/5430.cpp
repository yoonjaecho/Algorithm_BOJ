#include <iostream>
#include <vector>
#include <sstream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while(getline(ss, item, delim))
        tokens.push_back(item);
    return tokens;
}
int main() {
    int tc; cin >> tc;
    while(tc--) {
        string cmd; cin >> cmd;
        int n; cin >> n;
        string line; cin >> line;
        line = line.substr(1,line.size()-2);
        vector<string> v = split(line,',');
        deque<int> dq;
        for(string s : v)
            dq.push_front(stoi(s));
        bool dir = false;
        bool err = false;
        for(int i=0; i<cmd.size(); i++) {
            if(cmd[i] == 'R')
                dir = !dir;
            else if(cmd[i] == 'D') {
                if(dq.empty()) {
                    puts("error");
                    err = true;
                    break;
                }
                if(dir) dq.pop_front();
                else dq.pop_back();
            }
        }
        if(!err) {
            printf("[");
            if(dir) {
                for(int i=0; i<dq.size(); i++) {
                    if(i == dq.size()-1)
                        printf("%d",dq[i]);
                    else printf("%d,",dq[i]);
                }
            } else {
                for(int i=dq.size()-1; i>=0; i--) {
                    if(i == 0)
                        printf("%d",dq[i]);
                    else printf("%d,",dq[i]);
                }
            }
            printf("]\n");
        }
    }
}
