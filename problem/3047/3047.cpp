#include <cstdio>
#include <algorithm>
using namespace std;
int arr[3];
char seq[10];
int main() {
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    getchar();
    sort(arr,arr+3);
    scanf("%c%c%c",&seq[0],&seq[1],&seq[2]);
    for(int i=0; i<3; i++) {
        switch(seq[i]) {
            case 'A': printf("%d ",arr[0]);
                      break;
            case 'B': printf("%d ",arr[1]);
                      break;
            case 'C': printf("%d ",arr[2]);
                      break;
        }
    }
}
