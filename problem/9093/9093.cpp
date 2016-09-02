#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;
char in[2005];
int main() {
    int tc;
    scanf("%d\n",&tc);
    stack<char> st;
    while(tc--) {
        fgets(in,1001,stdin);
        for(int i=0; in[i]; i++) {
            if(isalpha(in[i])) st.push(in[i]);
            else {
                while(!st.empty())
                {
                    putchar(st.top());
                    st.pop();
                }
                putchar(in[i]);
            }
        }
    }
}
