#include <iostream>
#define FAST_IO ios::sync_with_stdio(false), cin.tie(0)
#define DIVISOR 1000007
using namespace std;

int arr[201][201];

void dp(int w1, int h1, int w2, int h2) {
    for (int h = h1; h <= h2; h++) {
        for (int w = w1; w <= w2; w++) {
            if (w == w1 && h == h1) { continue; }
            arr[h][w] = ((h > h1 ? arr[h-1][w] : 0) + (w > w1 ? arr[h][w-1] : 0)) % DIVISOR;
        }
    }
}

int main() {
    FAST_IO;
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    
    arr[1][1] = 1;
    dp(1, 1, w2, h2);
    dp(w2, h2, w1, h1);
    cout << arr[h1][w1];
}