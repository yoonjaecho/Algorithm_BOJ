#include <cstdio>
#include <cstring>
bool jail[101];

int main()
{
	int test_case,n,cnt;
	scanf("%d",&test_case);

	while(test_case--) {
		memset(jail,0,sizeof(jail));
		cnt = 0;
		scanf("%d",&n);
		for(int i=1; i<=n; i++) 
			for(int j=i; j<=n; j+=i) 
				jail[j] = jail[j]? 0:1;
		for(int i=1; i<=n; i++)
			if(jail[i]) cnt++;
		printf("%d\n",cnt);
	}
}
