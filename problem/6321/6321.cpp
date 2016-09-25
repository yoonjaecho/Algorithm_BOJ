#include <cstdio>
#include <cstring>
char in[51];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%s",in);
        printf("String #%d\n",i);
        for(int j=0; j<strlen(in); j++) {
            if(in[j] == 'Z') printf("A");
            else printf("%c",in[j]+1);
        }
        if(i!=n)puts("\n");
        else puts("");
    }
}
