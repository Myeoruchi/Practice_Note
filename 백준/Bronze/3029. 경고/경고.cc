#include <iostream>
using namespace std;

int main() {
    int h1, h2, m1, m2, s1, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    
    s1 += h1 * 3600 + m1 * 60;
    s2 += h2 * 3600 + m2 * 60;
    int res = s1 >= s2 ? 3600 * 24 + s2 - s1 : s2 - s1;
    
    printf("%02d:%02d:%02d", res / 3600, (res / 60) % 60, res % 60);
    return 0;
}