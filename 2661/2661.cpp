#include <cstdio>
#include <cstring>
using namespace std;
int seq[81],N;
bool ok;
bool is_promising(int p) {
    if(p < 1) return true;
    int iter = (p+1)/2,l,r;
    for(int i=1; i<=iter; i++) {
        r = p;
        l = r - i;
        bool all_same = true;
        for(int j=0; j<i; j++) 
            if(seq[l-j] != seq[r-j])
                all_same = false;
        if(all_same) return false;
    }
    return true;
}
void make_seq(int p) {
    if(ok) return;
    for(int i=1; i<=3; i++) {
        if(ok) return;
        seq[p] = i;
        if(is_promising(p)) {
            if(p == N-1) {
                ok = true;
                return;
            } else make_seq(p+1);
        }
    }
}
int main() {
    scanf("%d",&N);
    memset(seq,-1,sizeof(seq));
    make_seq(0);
    for(int i=0; i<N; i++)
        printf("%d",seq[i]);
    puts("");
}
