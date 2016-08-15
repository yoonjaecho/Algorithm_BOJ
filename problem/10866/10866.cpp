#include <cstdio>
#include <deque>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	int test_case;
	char s[101];
	int element;

	deque<int> d;

	scanf("%d",&test_case);
	
	while(test_case--) {

		scanf("%s",s);
		
		if(!strcmp(s,"push_back") || !strcmp(s,"push_front")) {
			scanf("%d",&element);
			if(strlen(s) == 9) 
				d.push_back(element);
			else
				d.push_front(element);
		} else if(!strcmp(s,"front")) {
			if(d.empty())
				printf("-1\n");
			else
				printf("%d\n",d.front());
		} else if(!strcmp(s,"back")) {
			if(d.empty())
				printf("-1\n");
			else
				printf("%d\n",d.back());
		} else if(!strcmp(s,"size")) {
			printf("%d\n",d.size());
		} else if(!strcmp(s,"empty")) {
			printf("%d\n",d.empty());
		} else if(!strcmp(s,"pop_front")) {
			if(d.empty())
				printf("-1\n");
			else {
				printf("%d\n",d.front());
				d.pop_front();
			}
		} else if(!strcmp(s,"pop_back")) {
			if(d.empty())
				printf("-1\n");
			else {
				printf("%d\n",d.back());
				d.pop_back();
			}
		}
	}
}



