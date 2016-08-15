#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
vector<int> ans(27,0);
int main()
{
    int n,ascii,cnt=0;
    string str;
    scanf("%d",&n);
    while(n--) {
        cin >> str;
        ascii = str[0] - 96;
        ans[ascii]++;
    }
    for(int i=1; i<=26; i++) {
        if(ans[i] >= 5) {
            printf("%c",i+96);
            cnt++;
        }
    }
    if(!cnt) printf("PREDAJA\n");
}
