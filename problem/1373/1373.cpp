#include <cstdio>
#include <cstring>
char c[1111111] ={'0','0'};
int main() {
    scanf("%s",c+2);
    int len = strlen(c);
    for(int i=len%3; i<len; i=i+3) 
        printf("%d",(c[i]-'0')*4 + (c[i+1]-'0')*2 + (c[i+2]-'0')); 
}
