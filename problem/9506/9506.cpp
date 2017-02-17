#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    while(1) {
        scanf("%d",&n);
        if(n==-1) break;
        set<int> s;
        for(int i=1; i*i<=n; i++) {
            if(!(n%i)) {
                s.insert(i);
                if(i == 1) continue;
                s.insert(n/i);
            }
        }
        int max = 0;
        for(auto &x:s)
            max += x;
        if(n!=max) printf("%d is NOT perfect.\n",n);
        else {
            printf("%d = ",n);
            for(auto it=s.begin(); it!=s.end(); it++) {
                if(it != prev(s.end()))
                    printf("%d + ",*it);
                else printf("%d\n",*it);
            }
        }
    }
}
