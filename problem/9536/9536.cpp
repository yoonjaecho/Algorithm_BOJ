#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
using namespace std;
int main() {
    int tc; cin >> tc; cin.ignore(); 
    while(tc--) {
        string sound;
        getline(cin,sound);
        istringstream buf(sound);
        istream_iterator<string> beg(buf), end;
        vector<string> tokens(beg, end);
        while(1) {
            string animal;
            getline(cin, animal);
            if(!animal.compare("what does the fox say?"))
                break;
            istringstream buff(animal);
            istream_iterator<string> start(buff), finish;
            vector<string> animal_sound(start, finish);
            tokens.erase(remove(tokens.begin(), tokens.end(),
                        animal_sound[2].c_str()),tokens.end());
        }
        for(auto &x: tokens)
            cout << x << " ";
    }
}
