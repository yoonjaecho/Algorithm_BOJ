#include <cstdio>
#include <cstring>
char in[21];
int main()
{
    int tc,rep;
    scanf("%d",&tc);
    while(tc--) {
        scanf("%d%s",&rep,in);
        int len = strlen(in);
        for(int i=0; i<len; i++)
            for(int j=0; j<rep; j++)
                printf("%c",in[i]);
        puts("");
    }
}

