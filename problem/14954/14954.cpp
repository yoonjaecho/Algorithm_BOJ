#include <cstdio>
#include <unordered_map>
using namespace std;
unordered_map<int, int> map;
int main() {
    int n; scanf("%d", &n);
    while(1) {
        int sum = 0;
        while(n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        if(sum == 1) {
            puts("HAPPY");
            break;
        } else {
            if(map[sum]) {
                puts("UNHAPPY");
                break;
            } else map[sum] = 1;
        }
        n = sum;
    }
}
