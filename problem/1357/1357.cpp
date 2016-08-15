#include <cstdio>
#include <queue>

using namespace std;

queue<int> q;

int rev(int i) {
	int a,b,sum=0;

	while(i>0) {
		q.push(i%10);		
		i/=10;
	}

	while(!q.empty()) {
		a = q.front();
		for(int i=1; i<q.size(); i++)
			a *= 10;
		sum += a;
		q.pop();
	}

	return sum;

}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);

	printf("%d\n",rev(rev(x)+rev(y)));
}

