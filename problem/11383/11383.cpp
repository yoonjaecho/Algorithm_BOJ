#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

char a[11][11];
char b[11][21];
char c[11][21];

int main()
{
	int n,m;
	bool isE = true;

	scanf("%d %d",&n,&m);

	for(int i=0; i<n; i++) 
		scanf("%s",a[i]);
	

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			b[i][2*j] = b[i][2*j+1] = a[i][j];
		}
	}

	for(int i=0; i<n; i++) 
		scanf("%s",c[i]);
	

	for(int i=0; i<n; i++) {
		if(strcmp(b[i],c[i]) != 0) {
			isE = false;
			break;
		}
	}

	if(isE)
		printf("Eyfa\n");
	else
		printf("Not Eyfa\n");

}
