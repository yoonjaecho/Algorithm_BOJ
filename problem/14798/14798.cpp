#include <cstdio>
char cake[30][30];
int r, c, qcnt;
void print() {
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++)
            printf("%c",cake[i][j]);
        puts("");
    }
}
bool is_cake(int y, int x) {
    return (cake[y][x] != '?');
}
void x_propagation(int y, int x) {
    int p = x;
    while(1) {
        p--;
        if(is_cake(y,p)) break;
        cake[y][p] = cake[y][x];
        qcnt--;
    }
    p = x;
    while(1) {
        p++;
        if(is_cake(y,p)) break;
        cake[y][p] = cake[y][x];
        qcnt--;
    }
}
void y_propagation(int y, int x) {
    int p = y;
    while(1) {
        p--;
        if(is_cake(p,x)) break;
        cake[p][x] = cake[y][x];
        qcnt--;
    }
    p = y;
    while(1) {
        p++;
        if(is_cake(p,x)) break;
        cake[p][x] = cake[y][x];
        qcnt--;
    }
}
void _main(int tc) {
    scanf("%d%d",&r,&c);
    getchar();
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            scanf("%c",&cake[i][j]);
            if(cake[i][j] == '?') qcnt++;
        }
        getchar();
    }
    if(!qcnt) {
        print();
        return;
    }
    for(int i=1; i<=r; i++) 
        for(int j=1; j<=c; j++) 
            if(is_cake(i,j)) 
                x_propagation(i,j);
    for(int i=1; i<=r; i++) 
        for(int j=1; j<=c; j++) 
            if(is_cake(i,j)) 
                y_propagation(i,j);
    print();
}
int main() {
    int t; scanf("%d",&t);
    for(int tc=1; tc<=t; tc++) {
        printf("Case #%d:\n",tc);
        _main(tc);
    }
}