#include <cstdio>

int main()
{
    int tri[3];
    int sum = 0, same = 0;
    for(int i=0; i<3; i++) {
        scanf("%d",&tri[i]);
        if(tri[i] == 0) {
            printf("Error\n");
            return 0;
        }
        sum += tri[i];
    }

    if(sum!=180) printf("Error\n");
    else {
        if(tri[0] == tri[1]) same++;
        if(tri[1] == tri[2]) same++;
        if(tri[2] == tri[0]) same++;

        if(same==3) printf("Equilateral\n");
        else if(same==1) printf("Isosceles\n");
        else printf("Scalene\n");
    }
}
