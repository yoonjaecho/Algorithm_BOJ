#include <cstdio>
#include <queue>
#include <cstdlib>
#include <algorithm>
#define P pair<int,int>
using namespace std;
struct order {
    bool operator()(P const &a, P const &b) const
    {
        if(a.first > b.first) return true;
        else if(a.first == b.first) {
            if(a.second > b.second) return true;
            else return false;
        } else return false;
    }
};
int main()
{
    int n,in;
    scanf("%d",&n);
    priority_queue<P,vector<P>,order> pq;
    while(n--) {
        scanf("%d",&in);
        if(!in) {
            if(pq.empty()) puts("0");
            else {
                printf("%d\n",pq.top().second);
                pq.pop();
            }
        } else pq.push(make_pair(abs(in),in));
    }
}
