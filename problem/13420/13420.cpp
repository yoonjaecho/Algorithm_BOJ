#include <cstdio>
#define ll long long
ll operate(ll a, char b, ll c) {
    switch(b) {
        case '+':
            return a + c;
        case '-':
            return a - c;
        case '*':
            return a * c;
        case '/':
            return a / c;
    }
}
int main() {
    int T; scanf("%d", &T);
    while(T--) {
        ll a, c, e; char b, d;
        scanf("%lld %c %lld %c %lld", &a, &b, &c, &d, &e);
        puts(operate(a, b, c) == e? "correct" : "wrong answer");
    }
}