#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    int T;
    scanf("%d",&T);
    for(int tc = 1; tc <= T; tc++) {
        ll n,in;
        vector<ll> v[2];
        scanf("%lld",&n);
        for(int i=0; i<2; i++) {
            for(int j=0; j<n; j++) {
                scanf("%lld",&in);
                v[i].push_back(in);
            }
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end(),greater<ll>());
        ll sum = 0;
        for(int i=0; i<n; i++)
            sum += v[0][i] * v[1][i];
        printf("Case #%d: %lld\n", tc,sum);
    }
}