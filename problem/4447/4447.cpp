#include <iostream>
using namespace std;
int main()
{
    string in;
    int n, cnt;
    cin >> n;
    cin.ignore();
    while(n--) {
        cnt = 0;
        getline(cin,in);
        for(int i=0; i<in.size(); i++) {
            if(in[i] == 'g' || in[i] == 'G') cnt++;
            else if(in[i] =='b' || in[i] == 'B') cnt--;
        }
        if(cnt > 0) cout << in << " is GOOD" << endl;
        else if(cnt < 0) cout << in << " is A BADDY" << endl;
        else cout << in << " is NEUTRAL" << endl;
    }
}
