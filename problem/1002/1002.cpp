#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--) {
        int x1,y1,r1,x2,y2,r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double dist = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        double rad = r1+r2;
        if(dist == rad) puts("1");
        else if(dist < rad) {
            if(!dist && r1==r2) puts("-1");
            else if(dist == abs(r1-r2)) puts("1");
            else if(dist > abs(r1-r2)) puts("2");
            else puts("0");
        } else puts("0");
    }
}
