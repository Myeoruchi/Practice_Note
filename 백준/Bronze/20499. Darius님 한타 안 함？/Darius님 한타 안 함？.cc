#include <stdio.h>

int main() {
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);
    if (k + a < d || !d) { printf("hasu"); }
    else { printf("gosu"); }
}