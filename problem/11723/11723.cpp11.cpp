#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool contain[21];
int main()
{
    int m,elem;
    cin.sync_with_stdio(false);
    cin >> m;
    while(m--) {
        string q;
        cin >> q;
        if(!q.compare("add")) {
            cin >> elem;
            contain[elem] = true;
        } else if(!q.compare("remove")) {
            cin >> elem;
            contain[elem] = false;
        } else if(!q.compare("check")) {
            cin >> elem;
            if(contain[elem]) puts("1");
            else puts("0");
        } else if(!q.compare("toggle")) {
            cin >> elem;
            contain[elem] = !contain[elem];
        } else if(!q.compare("all")) {
            memset(contain,true,sizeof(contain));
        } else if(!q.compare("empty")) {
            memset(contain,false,sizeof(contain));
        }
    }
}
