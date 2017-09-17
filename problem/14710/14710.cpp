#include <cstdio>
int main() {
    int hour; double min;
    scanf("%d%lf", &hour, &min);
    puts((double)(hour%30)/30 == min/360? "O":"X");
}