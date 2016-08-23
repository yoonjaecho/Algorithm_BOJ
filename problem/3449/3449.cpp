#include <cstdio>
#include <cstring>
char a[101];
char b[101];
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        scanf("%s%s",a,b);
        int al = strlen(a);
        int ans = 0;
        for(int i=0; i<al; i++) if(a[i]!=b[i]) ans++;
        printf("Hamming distance is %d.\n",ans);
    }
}
