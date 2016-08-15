#include <cstdio>
#include <cstring>
#include <algorithm>
int main()
{
    int tc;
    int ansX,ansY;
    int a[3],b[3];
    for(int i=0; i<3; i++) 
        scanf("%d %d",&a[i],&b[i]);
    ansX = a[0]==a[1]? a[2]:a[0]==a[2]? a[1]:a[0];
    ansY = b[0]==b[1]? b[2]:b[0]==b[2]? b[1]:b[0];
    printf("%d %d\n",ansX,ansY);
}
