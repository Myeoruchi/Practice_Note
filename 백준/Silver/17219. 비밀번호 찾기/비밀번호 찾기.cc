#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    unordered_map<string, string> um;
    int n, cnt;
    cin >> n >> cnt;
    for (int i = 0; i < n; i++) {
        string str1, str2;
        cin >> str1 >> str2;
        um[str1] = str2;
    }
    for (int i = 0; i < cnt; i++) {
        string str;
        cin >> str;
        cout << um[str] << "\n";
    }
}