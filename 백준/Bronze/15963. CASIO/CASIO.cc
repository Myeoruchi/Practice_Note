#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%d", a == b ? 1 : 0);
}