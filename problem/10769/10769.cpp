#include <iostream>
using namespace std;
int happy, p, check;
int main() {
    string in; getline(cin, in);
    while(p < in.size()) {
        if(in[p++] == ':') {
            if(in[p++] == '-') {
                if(in[p] == ')') happy++, check++;
                else if(in[p] == '(') happy--, check++;
                p++;
            }
        }
    }
    puts(happy > 0? "happy" : happy < 0? "sad" : check? "unsure" : "none");
}