#include <cstdio>
#include <vector>
using namespace std;
vector<int> v;
bool check[15111];
int ans, in;
int main() {
    int N, M; scanf("%d%d", &N, &M);
    for(int i=0; i<N; i++) {
        scanf("%d", &in);
        v.push_back(in);
    }
    for(int i=0; i<N; i++) {
        if(check[i]) continue;
        for(int j=i+1; j<N; j++) {
            if(check[j]) continue;
            if(v[i] + v[j] == M) ans++;
        }
    }
    printf("%d\n", ans);
}