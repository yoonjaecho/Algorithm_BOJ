#include <cstdio>

using namespace std;

int main()
{
	int x,y;
	int cal[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	int rtn=0;

	scanf("%d %d",&x,&y);

	for(int i=1; i<x; i++)
		rtn += cal[i-1];
	rtn += y;
	rtn--;

	rtn %= 7;

	if(rtn == 0)
		printf("MON\n");
	else if(rtn == 1)
		printf("TUE\n");
	else if(rtn == 2)
		printf("WED\n");
	else if(rtn == 3)
		printf("THU\n");
	else if(rtn == 4)
		printf("FRI\n");
	else if(rtn == 5)
		printf("SAT\n");
	else if(rtn == 6)
		printf("SUN\n");


	return 0;
}
		
	
