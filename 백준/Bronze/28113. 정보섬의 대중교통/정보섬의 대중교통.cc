#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);;
    if (a <= c) {
        if (b == c) { printf("Anything"); }
        else if (b < c) { printf("Bus"); }
        else { printf("Subway"); }
    }
    else { printf("Bus"); }
}