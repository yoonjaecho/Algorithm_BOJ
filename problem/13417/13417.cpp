#include <cstdio>
#include <string>
using namespace std;
int main() {
    int tc; scanf("%d",&tc);
    while(tc--) {
        int n; scanf("%d",&n);
        string ans = "";
        char ch[2];
        while(n--) {
            scanf("%1s",ch);
            ans = std::min(ch+ans, ans+ch);
        }
        printf("%s\n",ans.c_str());
    }
}
