#include <iostream>
using namespace std;

string list = "KkPpNnBbRrQq";
int score[] = {0, 0, 1, -1, 3, -3, 3, -3, 5, -5, 9, -9};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int sum = 0;
    string s;
    for (int i = 0; i < 8; i++) {
        cin >> s;
        for (int idx = 0; idx < 8; idx++) {
            if (s[idx] == '.') { continue; }
            for (int j = 0; j < list.length(); j++) {
                if (s[idx] == list[j]) {
                    sum += score[j];
                }
            }
        }
    }
    cout << sum;
}