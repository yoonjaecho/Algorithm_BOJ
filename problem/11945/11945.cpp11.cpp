#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,in;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++) {
        stack<int> s;
        for(int j=0; j<m; j++) {
            scanf("%1d",&in);
            s.push(in);
        }
        for(int j=0; j<m; j++) {
            printf("%d",s.top());
            s.pop();
        }
        puts("");
    }
}
