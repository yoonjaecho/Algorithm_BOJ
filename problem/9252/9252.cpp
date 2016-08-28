#include <iostream>
#include <algorithm>
using namespace std;
int a[1001][1001];
string str,cmp,answer;
void backTracking(int n, int m) 
{
    if(!n || !m) return;
    int &ret = a[n][m];
    if(ret > a[n-1][m-1] && ret > a[n-1][m] && ret > a[n][m-1]) {
        answer = str[n-1] + answer;
        backTracking(n-1,m-1);
    } else if(ret > a[n-1][m] && ret == a[n][m-1]) backTracking(n,m-1);
    else backTracking(n-1,m);
}
int main()
{
    cin >> str >> cmp;
    int n = str.length();
    int m = cmp.length();
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=m; j++) 
            a[i][j] = str[i-1]==cmp[j-1]? a[i-1][j-1]+1:max(a[i-1][j],a[i][j-1]);
    printf("%d\n",a[n][m]);
    backTracking(n,m);
    cout << answer << '\n';
}
