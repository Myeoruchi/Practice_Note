#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 0) { cout << 0 << '\n'; continue; }
        unordered_map<string, int> um;
        string str;
        while (n--) {
            cin >> str >> str;
            um[str]++;
        }
        int sum = 1;
        for (const auto &elem : um) {
            sum *= elem.second + 1;
        }
        cout << sum-1 << '\n';
    }
}