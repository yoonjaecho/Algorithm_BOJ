#include <iostream>
#include <algorithm>
using namespace std;
int a[1001][1001];
int main()
{
    string str,cmp;
    cin >> str >> cmp;
    int n = str.length();
    int m = cmp.length();
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=m; j++) 
            a[i][j] = str[i-1]==cmp[j-1]? a[i-1][j-1]+1:max(a[i-1][j],a[i][j-1]);
    printf("%d\n",a[n][m]);
}
