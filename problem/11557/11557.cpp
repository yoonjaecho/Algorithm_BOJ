#include <cstdio>
#include <cstring>

using namespace std;

int main() {

	int test_case;
	int numOfSchool;

	scanf("%d",&test_case);

	while(test_case--) {

		char name[21];
		int sool;

		char maxName[21];
		int maxSool = 0;
  		
		scanf("%d",&numOfSchool);
	
		while(numOfSchool--) {
		
			scanf("%s",name);
			scanf("%d",&sool);

			if(maxSool <= sool) {
				maxSool = sool;
				memcpy(maxName,name,sizeof(name));
			}
		}

		printf("%s\n",maxName);
	}
}
