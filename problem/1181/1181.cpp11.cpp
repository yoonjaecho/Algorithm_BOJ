#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;

bool cmp(const string &n, const string &m) {
	if(n.size() < m.size())
		return true;
	else if(n.size() == m.size())
		return n.compare(m)<0;
	else return false;
}

int main()
{
	int n;
	string str;
	vector<string> v;
	set<string> s;
	scanf("%d",&n);
	while(n--) {
		cin >> str;
		s.insert(str);
	}
	for(auto &x:s)
		v.push_back(x);
	sort(v.begin(),v.end(),cmp);
	for(auto &x:v)
		cout << x << endl;
}

