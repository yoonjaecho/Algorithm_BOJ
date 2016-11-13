#include <cstdio>
#include <cstring>

char seq[201];
int cup[5] = {0,-1,0,0,1};
void swap(char ch) {
    char temp;
    switch(ch) {
        case 'A':
            temp = cup[1];
            cup[1] = cup[2];
            cup[2] = temp;
            break;
        case 'B':
            temp = cup[1];
            cup[1] = cup[3];
            cup[3] = temp;
            break;
        case 'C':
            temp = cup[1];
            cup[1] = cup[4];
            cup[4] = temp;
            break;
        case 'D':
            temp = cup[2];
            cup[2] = cup[3];
            cup[3] = temp;
            break;
        case 'E':
            temp = cup[2];
            cup[2] = cup[4];
            cup[4] = temp;
            break;
        case 'F':
            temp = cup[3];
            cup[3] = cup[4];
            cup[4] = temp;
            break;
    }
}
int main() {
    gets(seq);
    for(int i=0; i<strlen(seq); i++)
        swap(seq[i]);
    for(int i=1; i<=4; i++)
        if(cup[i] == -1)
            printf("%d\n",i);
    for(int i=1; i<=4; i++)
        if(cup[i] == 1)
            printf("%d\n",i);
}
