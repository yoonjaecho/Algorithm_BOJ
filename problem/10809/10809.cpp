#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string in;
    cin >> in;
    for(int i='a'; i<='z'; i++) {
        auto it = find(in.begin(),in.end(),i);
        if(it != in.end()) printf("%d ",it-in.begin());
        else printf("-1 "); 
    }
}

