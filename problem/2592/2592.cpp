#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	int input;
	int freq[1000] = {0,};
	int Mfreq = freq[0];
 	int sum=0;

	for(int i=0; i<10; i++) {
		scanf("%d",&input);
		sum += input;
		freq[input]++;
	}

	
	printf("%d\n",sum/10);

	for(int i=10; i<1000; i+=10) {
		if(freq[i] > 0) 
			if(freq[i] > Mfreq)
				Mfreq = freq[i];
	}

	for(int i=10; i<1000; i+=10) {
		if(freq[i] == Mfreq) {
			printf("%d\n",i);
			break;
		}
	}
	



	return 0;
}


