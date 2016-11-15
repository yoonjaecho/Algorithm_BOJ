#include <cstdio>
int nx[] = {1,0,-1,0};
int ny[] = {0,-1,0,1};
int m,n,x,y,dir;
int main() {
    scanf("%d%d",&m,&n);
    while(n--) {
        char cmd[5]; int val;
        scanf("%s%d",cmd,&val);
        if(cmd[0] == 'T') {
            if(!val) dir = (dir+3)%4;
            else dir = (dir+1)%4;
        } else {
            x += nx[dir] * val;
            y += ny[dir] * val;
        }
        if(x<0 || y<0 || x>m || y>m) {
            puts("-1");
            return 0;
        }
    }
    printf("%d %d\n",x,y);
}
