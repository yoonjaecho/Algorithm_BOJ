#include <cstdio>
#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main()
{
    string str;
    cin >> str;
    ll ans,cnt=0;
    while(str.size()!=1) {
        cnt++;
        ans = 0;
        for(int i=0; i<str.size(); i++) {
            ans += str[i] - '0';
        }
        str = to_string(ans);
    }
    printf("%d\n",cnt);
    if(!str.compare("3") || !str.compare("6") || !str.compare("9"))
        puts("YES");
    else
        puts("NO");
}

