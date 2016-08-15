#include <string>
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string pattern;
    cin >> n;
    cin >> pattern;
    int ast = pattern.find("*");
    string pre = pattern.substr(0,ast);
    string post = pattern.substr(ast+1);
    while(n--) {
        bool noMatch = false;
        string str;
        cin >> str;
        if(str.size() < pre.size() + post.size()) noMatch = true;
        else {
            for(int i=0; i<pre.size(); i++)
                if(str[i] != pre[i]) noMatch = true;
            for(int i=0; i<post.size(); i++) 
                if(str[str.size()-1-i] != post[post.size()-1-i]) noMatch = true;
        }
        if(noMatch) printf("NE\n");
        else printf("DA\n"); 
    }
}
