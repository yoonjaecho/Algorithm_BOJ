#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a=0,b=0,in,s;

	for(int i=0; i<3; i++) {
		s=1;
		scanf("%1d",&in);
		for(int j=3-i; j<3; j++)
			s *= 10;
		a += s*in;
	}

	for(int i=0; i<3; i++) {
		s=1;
		scanf("%1d",&in);
		for(int j=3-i; j<3; j++)
			s *= 10;
		b += s*in;
	}

	cout << max(a,b)<< endl;
}



