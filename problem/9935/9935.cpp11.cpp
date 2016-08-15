#include <cstdio>
#include <algorithm>
#include <stack>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    stack<char> s;
    stack<char> buffer;
    string in,bomb;
    cin >> in >> bomb;
    int inSize = in.size();
    int bombSize = bomb.size();
    char firstBombCh = bomb[0];

    for(int index = inSize-1; index >= 0; index--) {
        char currentCh = in[index];
        s.push(currentCh);
        if(currentCh == firstBombCh) {
            for(int i=0, count=0; i<bombSize; i++) {
                if((!s.empty()) && (s.top() == bomb[i])) {
                    buffer.push(s.top());
                    s.pop();
                    count++;
                } else {
                    for(int j=0; j<count; j++) {
                        if(!buffer.empty()) {
                            s.push(buffer.top());
                            buffer.pop();
                        }
                    }
                    break;
                }
            }
        }
    }

    string ans = "";
    if(s.empty())
        printf("FRULA\n");
    else {
        while(!s.empty()) {
            ans += s.top();
            s.pop();
        }
    }

    cout << ans << endl;


}
