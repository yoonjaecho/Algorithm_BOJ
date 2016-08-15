#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

bool comparisonFunc(const char * c1, const char * c2)
{
	return strcmp(c1,c2) < 0;
}

int main() {

	char input[1001];

	vector<char*> arr;
	vector<char*>::iterator it;

	scanf("%s",input);

	for(int i=0; i<=strlen(input)-1; i++) 
		arr.push_back(input+i);

	sort(arr.begin(),arr.end(),comparisonFunc);

	
	for(int i=0; i<=strlen(input)-1; i++) {
		printf("%s\n",arr[i]);
	}
	


	
	

	return 0;
}
