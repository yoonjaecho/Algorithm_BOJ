#include <iostream>
#include <cstring>
#include <list>
using namespace std;
int main() {
    int tc; cin >> tc;
    while(tc--) {
        string in; cin >> in;
        list<char> l;
        auto it = l.begin();
        for(int i=0; i<in.size(); i++) {
            if(in[i] == '<') {
                if(it != l.begin()) 
                    it--;
            } else if(in[i] == '>') {
                if(it != l.end())
                    it++;
            } else if(in[i] == '-') {
                if(it != l.begin())
                    it = l.erase(--it);
            } else 
                it = ++l.insert(it, in[i]); 
        }
        for(auto &x:l)
            printf("%c",x);
        puts("");
    }
}
