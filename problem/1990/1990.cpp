#include <iostream>
#include <algorithm>
#include <string>
#define MAX 100000000
using namespace std;
bool p[MAX+1];
int main() {
    for(int i=2; i<MAX; i++)
        p[i] = 1;
    for(int i=2; i*i<MAX; i++)
        if(p[i]) for(int j=i*i; j<MAX; j+=i)
            p[j] = 0;
    int a,b; scanf("%d%d",&a,&b);
    for(int i=a; i<=b; i++) {
        if(p[i]) {
            string str = to_string(i);
            string cmp = str;
            reverse(str.begin(), str.end());
            if(!str.compare(cmp))
                cout << cmp << '\n';
        }
    }
    puts("-1");
}
