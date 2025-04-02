#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[7];
    if (n >= 620) { strcpy(s, "Red"); }
    else if (n >= 590) { strcpy(s, "Orange"); }
    else if (n >= 570) { strcpy(s, "Yellow"); }
    else if (n >= 495) { strcpy(s, "Green"); }
    else if (n >= 450) { strcpy(s, "Blue"); }
    else if (n >= 425) { strcpy(s, "Indigo"); }
    else { strcpy(s, "Violet"); }
    printf("%s", s);
}