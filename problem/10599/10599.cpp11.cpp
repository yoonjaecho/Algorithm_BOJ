#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int age[4];
int main()
{
    while(true) {
        for(int i=0; i<4; i++) scanf("%d",&age[i]);
        if(!age[0] && !age[1] && !age[2] && !age[3]) break;
        printf("%d %d\n",age[2]-age[1],age[3]-age[0]);
    }
}
