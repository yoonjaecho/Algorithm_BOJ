#include <cstdio>
int n, k, a[5000111];
int quick_selection(int start, int end) {
    int index = start;
    int pivot_value = a[index];
    int t = a[start];
    a[start] = a[end];
    a[end] = t;
    for (int i = start; i < end; i++) {
        if (a[i] <= pivot_value) {
            t = a[index];
            a[index] = a[i];
            a[i] = t;
            index++;
        }
    }
    t = a[end];
    a[end] = a[index];
    a[index] = t;
    return index == k? a[index]:
            index < k? quick_selection(index + 1, end):
                       quick_selection(start, index - 1);
}
int main() {
    scanf("%d %d", &n, &k);
    k--;
    for (int i=0; i<n; i++)
        scanf("%d", a+i);
    printf("%d\n", quick_selection(0, n - 1));
}