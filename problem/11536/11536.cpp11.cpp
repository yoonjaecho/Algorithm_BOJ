#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool upcmp(const string &m, const string &n) {
	return m.compare(n) < 0;
}
bool downcmp(const string &m, const string &n) {
	return m.compare(n) > 0;
}

int main()
{
	int n,uvcnt=0,dvcnt=0;
	vector<string> v,tv,uv,dv;
	map<string,int> m;
	string str;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		cin >> str;
		v.push_back(str);
		m[str] = i;
	}
	tv.assign(v.begin(),v.end());
	sort(v.begin(),v.end(),upcmp);
	uv.assign(v.begin(),v.end());
	sort(v.begin(),v.end(),downcmp);
	dv.assign(v.begin(),v.end());
	
	for(int i=0; i<n; i++) {
		bool ub=0,db=0;
		if(tv[i].compare(uv[i]) == 0) {
			ub = 1;
			uvcnt++;
		}
		if(tv[i].compare(dv[i]) == 0) {
			db = 1;
			dvcnt++;
		}
		if((!ub)&&(!db)) {
			printf("NEITHER\n");
			break;
		}
	}
	if(uvcnt == n) printf("INCREASING\n");
	else if(dvcnt == n) printf("DECREASING\n");

}
