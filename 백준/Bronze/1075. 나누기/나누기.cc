#include <stdio.h>

int main() {
    int n, f;
    scanf("%d\n%d", &n, &f);
    int a = (n % 100) + (f - (n % f));
    int b = (n % 100) - (n % f);
    a = a >= 100 ? 99 : a;
    if (b >= 0) {
        while (b - f >= 0) {
            b -= f;
        }
    }
    else { b = 99; }
    printf("%02d", a < b ? a : b);
}