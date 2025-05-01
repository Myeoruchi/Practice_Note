#include <iostream>
using namespace std;

#define IO ios::sync_with_stdio(0), cin.tie(0)

int time(string &s) {
    int day;
    if (s == "Mon") { day = 0; }
    else if (s == "Tue") { day = 1; }
    else if (s == "Wed") { day = 2; }
    else if (s == "Thu") { day = 3; }
    else { day = 4; }
    return day * 24;
}

int main() {
    IO;
    int t, n, n1, n2;
    string s1, s2;
    cin >> t >> n;
    while (n--) {
        cin >> s1 >> n1 >> s2 >> n2;
        t -= time(s2) + n2 - time(s1) - n1;
    }
    if (t <= 0) { cout << 0; }
    else if (t <= 48) { cout << t; }
    else { cout << -1; }
}