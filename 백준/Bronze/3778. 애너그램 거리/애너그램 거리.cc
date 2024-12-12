#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    
    string s1, s2;
    for (int t = 1; t <= n; t++) {
        getline(cin, s1);
        getline(cin, s2);
        int arr[26] = {0};
        
        int len = max(s1.length(), s2.length());
        for (int i = 0; i < len; i++) {
            if (i < s1.length()) { arr[s1[i]-'a']++; }
            if (i < s2.length()) { arr[s2[i]-'a']--; }
        }
        
        int dist = 0;
        for (int i = 0; i < 26; i++) {
            dist += abs(arr[i]);
        }
        
        cout << "Case #" << t << ": " << dist << '\n';
    }
    return 0;
}