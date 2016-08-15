#include <cstdio>
int chess[6] = {1,1,2,2,2,8};
int main()
{
    int in;
    for(int i=0; i<6; i++) {
        scanf("%d",&in);
        chess[i] -= in;
    }
    for(int i=0; i<6; i++)
        printf("%d ",chess[i]);
}
