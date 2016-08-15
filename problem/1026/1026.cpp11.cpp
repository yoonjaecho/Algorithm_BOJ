#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,in,sum=0;
	vector<int> a,b;
	scanf("%d",&n);

	for(int i=0; i<n; i++) {
		scanf("%d",&in);
		a.push_back(in);
	}
	for(int i=0; i<n; i++) {
		scanf("%d",&in);
		b.push_back(in);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<int>());
	for(int i=0; i<n; i++)
		sum += a[i] * b[i];
	printf("%d\n",sum);
}
