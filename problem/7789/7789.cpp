#include <cstdio>
#define MAX 10000000
bool p[MAX+1];
int a,b;
int main() {
    for(int i=2; i<MAX; i++)
        p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    scanf("%d%d",&a,&b);
    if(!p[a]) puts("No");
    else {
        a += b*1000000;
        if(!p[a]) puts("No");
        else puts("Yes");
    }
}
