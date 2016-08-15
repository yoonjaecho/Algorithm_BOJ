#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n,in;
    set<int> s;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&in);
        s.insert(in);
    }
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&in);
        if(s.find(in) == s.end()) puts("0");
        else puts("1");
    }
}

