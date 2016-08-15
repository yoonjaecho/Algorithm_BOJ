#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool stringcmp(const string &m, const string &n) {
	return m.compare(n) < 0;
}

int main()
{
	int n,test_case = 0;
	char c;
	string str;
	bool fin = false;
	scanf("%d",&n);
	if(n==0) fin = true;
	while(!fin) {
		printf("%d\n",++test_case);
		vector<string> v;
		getline(cin,str);
		for(int i=0; i<n; i++) {
			getline(cin,str);
			v.push_back(str);
		}
		sort(v.begin(),v.end(),stringcmp);
		for(int i=0; i<v.size(); i++)
			cout << v[i] << endl;
		scanf("%d",&n);
		if(n==0) fin = true;
	}
}


