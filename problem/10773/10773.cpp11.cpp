#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    int k,in,ans=0;
    stack<int> st;
    scanf("%d",&k);
    while(k--) {
        scanf("%d",&in);
        if(!in) st.pop();
        else st.push(in);
    }
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    printf("%d\n",ans);
}
