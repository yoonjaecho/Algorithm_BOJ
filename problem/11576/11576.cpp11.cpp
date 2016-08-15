#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int Abase,Bbase,m,in,sum=0;
    vector<int> b;
    scanf("%d %d",&Abase,&Bbase);
    scanf("%d",&m);
    int exp = 1;
    for(int i=0; i<m-1; i++)
        exp *= Abase;
    for(int i=m; i>0; i--) {
        scanf("%d",&in);
        sum += in * exp;
        exp /= Abase;
    }
    while(sum > 0) {
        b.push_back(sum % Bbase);
        sum /= Bbase;
    }
    for(int i=b.size()-1; i>=0; i--)
        printf("%d ",b[i]);
}
