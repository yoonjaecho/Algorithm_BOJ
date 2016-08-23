#include <iostream>
using namespace std;
int main()
{
    string in;
    cin >> in;
    int space = 0;
    for(int i=0; i<in.size(); i++) {
        if(in[i] == '{') {
            for(int s=0; s<space; s++) printf(" ");
            printf("{\n");
            space += 2;
            if(in[i+1] == '{') continue;
            if(in[i+1] != '}')
                for(int s=0; s<space; s++) printf(" ");
        } else if(in[i] == '}') {
            space -= 2;
            for(int s=0; s<space; s++) printf(" ");
            printf("}");
            if(in[i+1] == '}') puts(""); 
            else if(in[i+1] != ',') {
                puts("");
                space -= 2;
            }
        } else if(in[i] == ',') {
            printf(",\n");
            if(in[i+1] != '{')
                for(int s=0; s<space; s++) printf(" ");
        } else {
            printf("%c",in[i]);
            if(in[i+1] == '}') {
                puts("");
            } else if(in[i+1] == '{') puts("");
        }
    }
}
