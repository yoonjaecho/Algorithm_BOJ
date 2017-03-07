#include <cstdio>
char r[111][111];
int main() {
    int n,w=0,h=0; scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%s",r[i]);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(r[i][j]=='.') {
                bool more = 0;
                while(j<n && r[i][j+1]=='.') {
                    j++;
                    more = 1;
                }
                if(more) w++; 
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(r[j][i]=='.') {
                bool more = 0;
                while(j<n && r[j+1][i]=='.') {
                    j++;
                    more = 1;
                }
                if(more) h++; 
            }
        }
    }
    printf("%d %d\n",w,h);
}
