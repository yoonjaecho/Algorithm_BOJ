#include <iostream>
#include <algorithm>
using namespace std;
int a[4001][4001];
int main()
{
    string str,cmp;
    cin >> str >> cmp;
    int n = str.length();
    int m = cmp.length();
    int maxV = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(str[i-1] == cmp[j-1]) {
                a[i][j] = a[i-1][j-1]+1;
                maxV = max(maxV,a[i][j]);
            } else a[i][j] = 0;
        }
    }
    printf("%d\n",maxV);
}
