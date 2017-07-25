#include <cstdio>
#include <cmath>
using namespace std;
struct Point {
    int x,y,z;
    double get_dist(Point p) {
        return sqrt((p.x-x)*(p.x-x) + (p.y-y)*(p.y-y) + (p.z-z)*(p.z-z));
    }
};
int main() {
    Point a,b,c;
    scanf("%d%d%d",&a.x,&a.y,&a.z);
    scanf("%d%d%d",&b.x,&b.y,&b.z);
    scanf("%d%d%d",&c.x,&c.y,&c.z);
    double len = a.get_dist(b), ans=0;
    if(!len) ans = a.get_dist(c);
    else {
        double proj = ((b.x-a.x)*(c.x-a.x) + (b.y-a.y)*(c.y-a.y) + (b.z-a.z)*(c.z-a.z)) / len;
        if(proj < 0) ans = a.get_dist(c);
        else if(proj > len) ans = b.get_dist(c);
        else ans = sqrt(a.get_dist(c)*a.get_dist(c) - proj*proj);
    }
    printf("%.10lf\n",ans);
}
