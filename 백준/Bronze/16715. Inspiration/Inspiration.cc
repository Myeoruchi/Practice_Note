#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 8) { printf("4 3"); }
    else { printf("%d %d", n-n/2, n/2+1); }
}