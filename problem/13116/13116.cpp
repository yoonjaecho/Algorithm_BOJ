#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int tc,a,b;
    scanf("%d",&tc);
    while(tc--) {
        vector<int> v;
        scanf("%d%d",&a,&b); 
        while(a) {
            v.push_back(a);
            a/=2;
        }
        bool found = false;
        while(b) {
            for(int i=0; i<v.size(); i++) {
                if(b==v[i]) {
                    printf("%d\n",b*10);
                    found = true;
                    break;
                }
            }
            b/=2;
            if(found) break;
        }
    }
}
