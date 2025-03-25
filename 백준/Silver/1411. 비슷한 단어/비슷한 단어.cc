#include <iostream>
#include <vector>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, cnt = 0;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            vector<int> a(26), b(26);
            bool flag = true;
            for (int len = 0; len < s[i].length(); len++) {
                int alpha1 = s[i][len] - 'a', alpha2 = s[j][len] - 'a';
                if (!a[alpha1] && !b[alpha2]) {
                    a[alpha1] = alpha2 + 1;
                    b[alpha2] = alpha1+ 1;
                }
                else if (a[alpha1] != alpha2 + 1) {
                    flag = false;
                    break;
                }
            }
            if (flag) { cnt++; }
        }
    }
    cout << cnt;
}