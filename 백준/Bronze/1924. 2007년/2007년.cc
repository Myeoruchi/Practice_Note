#include <iostream>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int mon[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string yoil[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main() {
    IO;
    int x, y; cin >> x >> y;
    int day = y;
    for (int i = 0; i < x; i++) { day += mon[i]; }
    cout << yoil[day % 7];
}