#include <iostream>
using namespace std;

int arr[1001][1001];

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    int res = 0;
    for (int i = 1; i <= s1.length(); i++) {
        for (int j = 1; j <= s2.length(); j++) {
            if (s1[i-1] == s2[j-1]) {
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            else {
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
            if (res < arr[i][j]) { res = arr[i][j]; }
        }
    }
    
    cout << res;
    return 0;
}