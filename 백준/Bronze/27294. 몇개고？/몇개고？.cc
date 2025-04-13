#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (12 <= a && a <= 16 && !b) { printf("320"); }
    else { printf("280"); }
}