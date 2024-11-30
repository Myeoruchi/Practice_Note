#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int r, c;
    cin >> r >> c;
    
    int temp, coord[4], idx = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> temp;
            if (temp) {
                coord[2*idx] = i;
                coord[2*idx+1] = j;
                idx++;
            }
        }
    }
    
    cout << abs(coord[0] - coord[2]) + abs(coord[1] - coord[3]);
    return 0;
}