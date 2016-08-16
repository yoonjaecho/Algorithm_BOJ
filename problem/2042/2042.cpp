#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

ll init(vector<ll> &a, vector<ll> &tree, int node, int start, int end) {
    if(start == end)
        return tree[node] = a[start];
    else
        return tree[node] = init(a, tree, node*2, start, (start+end)/2) + init(a, tree, node*2+1, (start+end)/2+1, end);
}

void update(vector<ll> &tree, int node, int start, int end, int index, ll diff) {
    if(index < start || index > end) return;
    tree[node] += diff;
    if(start != end) {
        update(tree, node*2, start, (start+end)/2, index, diff);
        update(tree, node*2+1, (start+end)/2+1, end, index, diff);
    }
}

ll sum(vector<ll> &tree, int node, int start, int end, int left, int right) {
    if(left > end || right < start)
        return 0;
    if(left <= start && end <= right)
        return tree[node];
    return sum(tree, node*2, start, (start+end)/2, left, right) + sum(tree, node*2+1, (start+end)/2+1, end, left, right);
}

int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    vector<ll> a(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    vector<ll> tree(tree_size);
    m += k;
    for(int i=0; i<n; i++)
        scanf("%lld",&a[i]);
    init(a, tree, 1, 0, n-1);
    while(m--) {
        int t1;
        scanf("%d",&t1);
        if(t1==1) {
            int t2;
            ll t3, diff;
            scanf("%d %lld",&t2,&t3);
            t2--;
            diff = t3 - a[t2];
            a[t2] = t3; 
            update(tree, 1, 0, n-1, t2, diff);
        } else if(t1==2) {
            int w,e;
            scanf("%d%d",&w,&e);
            printf("%lld\n",sum(tree, 1, 0, n-1, w-1,e-1));
        }
    }
}
