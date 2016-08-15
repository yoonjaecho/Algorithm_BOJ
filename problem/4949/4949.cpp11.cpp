#include <cstdio>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    string in;
    getline(cin,in);
    while(in.compare(".")) {
        stack<char> st;
        bool match = true;
        int cnt = 0;
        for(int i=0; i<in.size(); i++) {
            if(in[i]=='(') {
                st.push(in[i]);
                cnt++;
            }
            if(in[i]==')') {
                if(st.empty()) {
                    match = false;
                    break;
                }
                if(st.top()=='(') {
                    st.pop();
                    cnt--;
                }
                else {
                    match = false;
                    break;
                }
            }
            if(in[i]=='[') {
                st.push(in[i]);
                cnt++;
            }
            if(in[i]==']') {
                if(st.empty()) {
                    match = false;
                    break;
                }
                if(st.top()=='[') {
                    st.pop();
                    cnt--;
                }
                else {
                    match = false;
                    break;
                }
            }
        }
        if(match && !cnt) puts("yes");
        else puts("no");
        getline(cin,in);
    }

}
