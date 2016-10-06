#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
#include <array>
using namespace std;
char name[21];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    map<int, string> m1;
    map<string, int> m2;
    for(int i=1; i<=n; i++) {
        scanf("%s",name);
        m1[i] = name;
        m2[name] = i;
    }
    while(m--) {
        scanf("%s",name);
        if('0' <= name[0] && name[0] <= '9')
            printf("%s\n",m1[stoi(name)].c_str());
        else printf("%d\n",m2[name]);
    }
}
