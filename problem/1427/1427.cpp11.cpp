#include <cstdio>
#include <iostream>
using namespace std;
int a[10];
int main()
{
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++) a[str[i]-'0']++; 
    for(int i=9; i>=0; i--) if(a[i]>0) while(a[i]--)
        printf("%d",i);
}

