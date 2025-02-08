#include <iostream>
#include <vector>
using namespace std;

vector<string> sList = { "TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH" };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    string s;
    while (t--) {
        cin >> s;
        int cnt[8] = {0};
        for (int i = 0; i < 38; i++) {
            string sub = s.substr(i, 3);
            for (int j = 0; j < 8; j++) {
                if (sub == sList[j]) {
                    cnt[j]++;
                }
            }
        }
        for (auto e: cnt) {
            cout << e << ' ';
        }
        cout << '\n';
    }
}