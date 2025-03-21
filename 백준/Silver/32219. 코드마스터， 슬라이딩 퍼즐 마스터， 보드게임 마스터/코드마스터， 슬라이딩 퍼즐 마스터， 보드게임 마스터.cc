#include <stdio.h>

int main() {
    int t, r, c;
    scanf("%d", &t);
    while (t--) {
        scanf(" %d %d", &r, &c);
        if (r != c) {
            r = r < c ? r : c;
            printf("jinseo\n%d %d\n", r, r);
        }
        else { printf("dohoon\n"); }
    }
}