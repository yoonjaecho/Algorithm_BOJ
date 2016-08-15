#include <cstdio>
int first[1000001];
int arr[1000001];

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        scanf("%d",&first[i]);
        arr[i] = first[i];
    }

    for(int i=1; i<=n; i++) {
        int temp = arr[i];
        arr[i] = first[arr[i]];
        if(temp == arr[i]) {
            printf("-1\n");
            return 0;
        }
    }
    printf("1000000007\n");
}
