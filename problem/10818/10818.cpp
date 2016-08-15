#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int N,input;
	vector<int> a;

	scanf("%d",&N);

	while(N--) {
		scanf("%d",&input);
		a.push_back(input);
	}

	sort(a.begin(),a.end());

	printf("%d %d\n",a.front(),a.back());

}

