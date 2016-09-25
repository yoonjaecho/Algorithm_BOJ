#include <iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--) {
        string in;
        cin >> in;
        int s=0,e=in.size()-1;
        bool DO;
        while(s<e) {
            if(in[s] == in[e]) DO = 1;
            else DO = 0;
            s++; e--;
        }
        if(DO) puts("Do-it");
        else puts("Do-it-Not");
    }
}
