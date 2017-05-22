#include <iostream>
using namespace std;
int cnt;
string result = "";
void hanoi(int n, int x, int y, int z) {
    if(n) {
        hanoi(n-1, x, z, y);
        cnt++;
        result += to_string(x) + " " + to_string(z) + "\n";
        hanoi(n-1, y, x, z);
    }
}
int main() {
	int n; scanf("%d",&n);
    hanoi(n,1,2,3);
    printf("%d\n%s",cnt,result.c_str());
}
