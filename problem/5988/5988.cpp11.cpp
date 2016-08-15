#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    string num;
    int n,in;
    scanf("%d",&n);
    while(n--) {
        cin >> num;
        in = num[num.size()-1] - '0'; 
        if(in%2 == 0) printf("even\n");
        else printf("odd\n");
    }
}
