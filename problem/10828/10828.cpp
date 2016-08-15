#include <cstdio>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int n,in;
	string str;
	scanf("%d",&n);

	stack<int> st;

	while(n--) {
		cin>>str;
		if(str == "push") {
			scanf("%d",&in);
			st.push(in);
		} else if(str == "pop") {
			if(st.empty())
				printf("-1\n");
			else { 
				printf("%d\n",st.top());
				st.pop();
			}
		} else if(str == "size") {
			printf("%d\n",st.size());
		} else if(str == "empty") {
			printf("%d\n",st.empty());
		} else if(str == "top") {
			if(st.empty())
				printf("-1\n");
			else  
				printf("%d\n",st.top());
		}
	}
}
