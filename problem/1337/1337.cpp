#include <cstdio>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
unordered_map<int, int> hash_map;
int MIN = 1e9;
int main() {
    int N,in; scanf("%d",&N);
    while(N--) {
        scanf("%d",&in);
        hash_map[in]++;
        v.push_back(in);
    }
    for(auto &x:v) {
        int cnt = 4;
        for(int i=x-4; i<x; i++)
            if(hash_map[i]) cnt--;
        MIN = min(MIN, cnt);
    }
    printf("%d\n",MIN);
}
