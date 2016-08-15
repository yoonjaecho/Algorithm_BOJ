#include <cstdio>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

string getS(int num) {
	if(num == 0) return "zero";
	else if(num == 1) return "one";
	else if(num == 2) return "two";
	else if(num == 3) return "three";
	else if(num == 4) return "four";
	else if(num == 5) return "five";
	else if(num == 6) return "six";
	else if(num == 7) return "seven";
	else if(num == 8) return "eight";
	else if(num == 9) return "nine";
	else return "";
}

int main()
{
	int a,b,idx=0;
	scanf("%d %d",&a,&b);
	map<string,int> m;
	string str;
	for(int i=a; i<=b; i++) {
		if(i>9) str = getS(i/10) + " " + getS(i%10);
		else str = getS(i);
		m[str] = i;
	}
	for(auto x : m) {
		if(idx++%10 == 9) printf("%d\n",x.second);
		else printf("%d ",x.second);
	}
		
}

