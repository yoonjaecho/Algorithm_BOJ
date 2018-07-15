#include <iostream>
using namespace std;
char UCPC[4] = {'U', 'C', 'P', 'C'};
int main() {
    string in; getline(cin, in);
    int p = 0;
    for(int i=0; i<in.size(); i++)
        if(in[i] == UCPC[p])
            p++;
    puts(p == 4? "I love UCPC":"I hate UCPC");
}