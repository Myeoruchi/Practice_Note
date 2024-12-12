#include <iostream>
using namespace std;

int main() {
    int temp, sec1 = 0, sec2 = 0;
    
    cin >> temp;
    for (int i = 0; i < 2; i++) {
        sec1 += temp;
        sec1 *= 60;
        cin.get();
        cin >> temp;
    }
    sec1 += temp;
    cin >> temp;
    for (int i = 0; i < 2; i++) {
        sec2 += temp;
        sec2 *= 60;
        cin.get();
        cin >> temp;
    }
    sec2 += temp;
    
    int res;
    if (sec1 >= sec2) { res = 60*60*24 - sec1 + sec2; }
    else { res = sec2 - sec1; }
    
    int h = res / (60 * 60);
    res %= 60 * 60;
    int m = res / 60;
    res %= 60;
    
    printf("%02d:%02d:%02d", h, m, res);
    return 0;
}