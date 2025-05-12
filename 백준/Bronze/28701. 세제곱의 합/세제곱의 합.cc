#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("%d\n%d\n%d", sum, sum * sum, sum * sum);
}