#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#define MP make_pair
using namespace std;

vector<pair<int, string>> v[2017];
vector<pair<int, string>> ans;

int main()
{
    v[1967].push_back(MP(1967, "DavidBowie"));

    v[1969].push_back(MP(1969, "SpaceOddity"));

    v[1970].push_back(MP(1970, "TheManWhoSoldTheWorld"));

    v[1971].push_back(MP(1971, "HunkyDory"));

    v[1972].push_back(MP(1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"));

    v[1973].push_back(MP(1973, "AladdinSane"));
    v[1973].push_back(MP(1973, "PinUps"));

    v[1974].push_back(MP(1974, "DiamondDogs"));

    v[1975].push_back(MP(1975, "YoungAmericans"));

    v[1976].push_back(MP(1976, "StationToStation"));

    v[1977].push_back(MP(1977, "Low"));
    v[1977].push_back(MP(1977, "Heroes"));

    v[1979].push_back(MP(1979, "Lodger"));

    v[1980].push_back(MP(1980, "ScaryMonstersAndSuperCreeps"));

    v[1983].push_back(MP(1983, "LetsDance"));

    v[1984].push_back(MP(1984, "Tonight"));

    v[1987].push_back(MP(1987, "NeverLetMeDown"));

    v[1993].push_back(MP(1993, "BlackTieWhiteNoise"));

    v[1995].push_back(MP(1995, "1.Outside"));

    v[1997].push_back(MP(1997, "Earthling"));

    v[1999].push_back(MP(1999, "Hours"));

    v[2002].push_back(MP(2002, "Heathen"));

    v[2003].push_back(MP(2003, "Reality"));

    v[2013].push_back(MP(2013, "TheNextDay"));

    v[2016].push_back(MP(2016, "BlackStar"));

    int n,start,end;
    scanf("%d",&n);
    while(n--) {
        ans.clear();
        scanf("%d %d",&start,&end);
        if(start < 1967) start = 1967;
        for(int i=start; i<=end; i++) {
            if(v[i].empty()) {
                continue;
            } else {
                for(int j=0; j<v[i].size(); j++) {
                    ans.push_back(v[i][j]); 
                }
            }
        }
        printf("%d\n",ans.size());
        for(int i=0; i<ans.size(); i++) {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
}
