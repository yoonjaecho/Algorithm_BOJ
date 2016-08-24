#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--) {
        string in;
        ll ans = 0;
        cin >> in;
        int len = in.size();
        for(int i=len-1, j=0; i>=0; i--,j++) {
            ll base = 1;
            for(int k=0; k<j; k++) base *= 2;
            if(in[i]-'0') ans += base;
        }
        printf("%lld\n",ans);
    }
}
