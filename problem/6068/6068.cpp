#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> Task;
int main()
{
    int n;
    scanf("%d",&n);
    vector<Task> v;
    for(int i=0; i<n; i++) {
        int t,s;
        scanf("%d%d",&t,&s);
        v.push_back(Task(t,s));
    }
    sort(v.begin(), v.end(), [&](Task const &a, Task const &b) {
        return a.second < b.second;
    });
    int limit = v[n-1].second;
    int sum_t = 0;
    int min_nap = 987654321;
    for(int i=0; i<n; i++) {
        sum_t += v[i].first;
        if(sum_t > v[i].second) {
            puts("-1");
            return 0;
        }
        min_nap = min(v[i].second - sum_t, min_nap);
    }
    printf("%d\n",min_nap);
}
