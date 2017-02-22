#include <cstdio>
#define ll long long
ll a[1000001],cnt = 0;
void merge_and_count(int leftStart, int leftEnd, int rightStart, int rightEnd) {
    int indexA = leftStart, indexB = rightStart;
    int currentIndex = leftStart;
    int list[rightEnd + 1];
    while(indexA <= leftEnd && indexB <= rightEnd) {
        if(a[indexA] > a[indexB]) {
            cnt += leftEnd - indexA + 1;
            list[currentIndex++] = a[indexB++];
        } else list[currentIndex++] = a[indexA++];
    }
    while(indexA <= leftEnd)
        list[currentIndex++] = a[indexA++];
    while(indexB <= rightEnd)
        list[currentIndex++] = a[indexB++];
    for(int index=leftStart; index<=rightEnd; index++)
        a[index] = list[index];
}
void sort_and_count(int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        sort_and_count(left, mid);
        sort_and_count(mid + 1, right);
        merge_and_count(left, mid, mid + 1, right);
    }
}
int main() {
    int n; scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%lld",a+i);
    sort_and_count(1, n);
    printf("%lld\n",cnt);
}
