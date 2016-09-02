#include <cstdio>
#include <algorithm>
using namespace std;
int a[3];
int dist[2];
int main()
{
    int cnt = 0;
    for(int i=0; i<3; i++) scanf("%d",a+i);
    while(1) {
        dist[0] = a[1] - a[0];
        dist[1] = a[2] - a[1];
        if(dist[0] >= dist[1]) {
            a[2] = a[0] + 1;
            if(a[2] == a[1]) break;
            swap(a[1],a[2]);
        } else {
            a[0] = a[1] + 1;
            if(a[1] == a[2]) break;
            swap(a[0],a[1]);
        }
        cnt++;
    }
    printf("%d\n",cnt);
}
