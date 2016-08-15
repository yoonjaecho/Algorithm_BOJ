#include <cstdio>
int main()
{
	char line[9];
	char b,w;
	int sum=0;
	for(int i=0; i<8; i++) {
		scanf("%s",line);
		for(int j=0; j<8; j++) {
			if((i%2==0) && (j%2==0) && (line[j]=='F'))
				sum++;
			else if((i%2==1) && (j%2==1) && (line[j]=='F'))
				sum++;
		}
	}
	printf("%d\n",sum);
}
