#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

string arr[4];
string num[10] = {
    "####.##.##.####", "..#..#..#..#..#", "###..#####..###", "###..####..####",
    "#.##.####..#..#", "####..###..####", "####..####.####", "###..#..#..#..#",
    "####.#####.####", "####.####..####"
};

int main() {
    IO;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            string s; cin >> s;
            arr[j] += s;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 10; k++) {
            int j = 0;
            for (; j < 15; j++) {
                if (arr[i][j] == '#' && num[k][j] == '.') { break; }
            }
            if (j == 15) { cout << k; break; }
        }
        if (i == 1) { cout << ':'; }
    }
}