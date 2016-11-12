#include <cstdio>
#include <iostream>
using namespace std;
char tree[26][2];
void preorder(char i) {
    printf("%c", i + 'A');
    if(tree[i][0] != -1)
        preorder(tree[i][0]);
    if(tree[i][1] != -1)
        preorder(tree[i][1]);
}
void inorder(char i) {
    if(tree[i][0] != -1)
        inorder(tree[i][0]);
    printf("%c", i + 'A');
    if(tree[i][1] != -1)
        inorder(tree[i][1]);
}
void postorder(char i) {
    if(tree[i][0] != -1)
        postorder(tree[i][0]);
    if(tree[i][1] != -1)
        postorder(tree[i][1]);
    printf("%c", i + 'A');
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        string line;
        getline(cin,line);
        tree[line[0]-'A'][0] = (line[2]=='.')? -1:line[2]-'A';
        tree[line[0]-'A'][1] = (line[4]=='.')? -1:line[4]-'A';
    }
    preorder(0); puts("");
    inorder(0); puts("");
    postorder(0); puts("");
}
