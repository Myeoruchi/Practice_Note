#include <iostream>
#include <cmath>
using namespace std;

bool row[11], col[11];

int main() {
    int r, c;
    cin >> r >> c;
    
    char temp;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> temp;
            if (temp == 'o') {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    
    int minimum = 20;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (!row[i] && !col[j]) {
                minimum = min(minimum, abs(r-i) + abs(c-j));
            }
        }
    }
    cout << minimum;
    return 0;
}