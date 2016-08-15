#include <cstdio>
#define MAX_SIZE 1000001
int parent[MAX_SIZE];
int ranking[MAX_SIZE];

void init(int n) {
    for(int i=0; i<=n; i++) {
        parent[i] = i;
        ranking[i] = 0;
    }
}

int find(int x) {
    if(parent[x] == x)
        return x;
    else
        return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if(a==b) return;

    if(ranking[a] < ranking[b])
        parent[a] = b;
    else {
        parent[b] = a;
        if(ranking[a] == ranking[b])
            ranking[a]++;
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    init(n);
    for(int i=0; i<m; i++) {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(!x) {
            unite(y,z);
        } else {
            y = find(y);
            z = find(z);
            if(y==z) puts("YES");
            else puts("NO");
        }
    }

}
