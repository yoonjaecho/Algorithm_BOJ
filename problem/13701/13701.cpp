#include <cstdio>
#include <algorithm>
using namespace std;
int bit[(1 << 20)];
int main() {
    int in;
    while(~scanf("%d",&in)) {
        if(bit[in/32]&(1<<(in%32)))
            continue;
        printf("%d ",in);
        bit[in/32] += (1<<(in%32));
    }
}
