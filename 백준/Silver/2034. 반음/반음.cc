#include <iostream>
using namespace std;

int up[] = {2, 1, 2, 2, 1, 2, 2};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 7; i++) {
        int idx = i, dist;
        for (int j = 0; j < n; j++) {
            dist = arr[j];
            int sign = dist >> 31;
            while (dist != 0) {
                idx = sign ? (idx + 6) % 7 : (idx + 1) % 7;
                dist += sign ? up[idx] : -up[(idx + 6) % 7];
                if (dist >> 31 != sign) { break; }
            }
            if (dist != 0) { break; }
        }
        if (dist == 0) { cout << (char)('A' + i) << ' ' << (char)('A' + idx) << '\n'; }
    }
}