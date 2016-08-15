#include <cstdio>
#include <queue>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int n,in;
	string str;
	scanf("%d",&n);

	queue<int> q;

	while(n--) {
		cin>>str;
		if(str == "push") {
			scanf("%d",&in);
			q.push(in);
		} else if(str == "pop") {
			if(q.empty())
				printf("-1\n");
			else { 
				printf("%d\n",q.front());
				q.pop();
			}
		} else if(str == "size") {
			printf("%d\n",q.size());
		} else if(str == "empty") {
			printf("%d\n",q.empty());
		} else if(str == "front") {
			if(q.empty())
				printf("-1\n");
			else  
				printf("%d\n",q.front());
		} else if(str == "back") {
			if(q.empty())
				printf("-1\n");
			else  
				printf("%d\n",q.back());
		}
	}
}
