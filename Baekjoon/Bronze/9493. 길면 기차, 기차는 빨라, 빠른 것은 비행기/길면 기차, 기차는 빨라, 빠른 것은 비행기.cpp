#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int km, a, b;
    while (true) {
        cin >> km >> a >> b;
        if (!km) { break; }
        int h, m, s;
        s = round((1/double(a) - 1/double(b)) * km * 3600);
        h = s / 3600, s %= 3600;
        m = s / 60, s %= 60;
        printf("%d:%02d:%02d\n", h, m, s);
    }
    return 0;
}