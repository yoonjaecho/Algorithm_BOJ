#include <cstdio>
#include <cstring>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
char a[101];
int main() {
    int T, test_case;
    scanf("%d",&T);
    for(test_case = 1; test_case <= T; test_case++) {
        int res = 0;
        scanf("%s",a);
        int aSize = strlen(a);
        int lastMinus = 0;
        int lastPlus = aSize;
        int plusCnt = 0;
        stack<char> s;
        for(int i=aSize; i>=0; i--) {
            s.push(a[i]);
            if(a[i] == '-') {
                lastMinus = max(lastMinus,i);
            } else if(a[i] == '+') {
                plusCnt++;
            }
        }
        if(plusCnt == aSize) {
            printf("Case #%d: %d\n",test_case,0);
            continue;
        }
        while(true) {
            char sTop = s.top();
            queue<char> q;
            if(sTop == '-') {
                for(int i=aSize; i>=0; i--) {
                    if(a[i] == '-') {
                        lastMinus = i;
                        break;
                    }
                }
                for(int i=0; i<=lastMinus; i++) {
                    sTop = s.top(); s.pop();
                    if(sTop == '-') {
                        q.push('+');
                        a[lastMinus-i] = '+';
                        plusCnt++;
                    } else if(sTop == '+') {
                        q.push('-');
                        a[lastMinus-i] = '-';
                        plusCnt--;
                    }
                }
            } else if(sTop == '+'){
                for(int i=0; i<aSize; i++) {
                    if(a[i] == '-') {
                        lastPlus = i-1; 
                        break;
                    } else if(a[i] == '+') {
                        a[i] = '-';
                        q.push('-');
                        s.pop();
                        plusCnt--;
                    }
                }
            }
            while(!q.empty()) {
                char temp = q.front(); q.pop();
                s.push(temp);
            }
            res++;
            if(plusCnt == aSize) break;
        }
        printf("Case #%d: %d\n",test_case,res);
    }
}