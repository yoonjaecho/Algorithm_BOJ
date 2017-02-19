#include <cstdio>
#include <cstring>
#define MAX 10000
char str[30];
bool p[MAX+1];
int main() {
    for(int i=1; i<MAX; i++)
        p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    scanf("%s",str);
    int ans = 0;
    for(int i=0; i<strlen(str); i++) {
        if(97 <= str[i] && str[i] <= 123)
            str[i] -= 96;
        else if(65 <= str[i] && str[i] <= 91)
            str[i] -= 38;
        ans += str[i];
    }
    if(p[ans]) puts("It is a prime word.");
    else puts("It is not a prime word.");
}
