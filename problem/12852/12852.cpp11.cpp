#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int mincnt = 987654321;
vector<int> ans;
void go(int n,int cnt, vector<int> &v) {
    vector<int> newV = v;
    newV.push_back(n);
    if(n==1) {
        if(mincnt > cnt) {
            mincnt = cnt;
            ans = newV;
            return;
        } else return;
    }
    if(mincnt > cnt) {
        if(n%3==0) go(n/3,cnt+1,newV);
        if(n%2==0) go(n/2,cnt+1,newV);
        go(n-1,cnt+1,newV);
    }
}
int main()
{
    int in;
    scanf("%d",&in);
    vector<int> vec;
    go(in,0,vec);
    printf("%d\n",mincnt);
    for(auto &x:ans) printf("%d ",x);
}
