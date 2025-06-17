#include <iostream>
#include <vector>
using namespace std;

#define IO cin.tie(0)->sync_with_stdio(0)

int idx[] = {0, 2, 3, 5, 7, 8, 10};
string note[] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

int main() {
    IO;
    while (1) {
        vector<int> v;
        string s; cin >> s;
        if (s[0] == '*') { break; }
        while (s[0] >= 'A') {
            int i = idx[s[0] - 'A'];
            if (s.length() == 2) { i += (s[1] == '#' ? 1 : -1); }
            v.emplace_back(i);
            cin >> s;
        }
        int adj = stoi(s);
        for (int &e: v) {
            e += adj;
            cout << note[(e < 0 ? 12 + e : e % 12)]  << ' ';
        }
        cout << '\n';
    }
}