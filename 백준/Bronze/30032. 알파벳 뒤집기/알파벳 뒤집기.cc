#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string ans, tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        for (int j = 0; j < n; j++) {
            switch (tmp[j]) {
                case 'b': tmp[j] = m == 1 ? 'p' : 'd'; break;
                case 'd': tmp[j] = m == 1 ? 'q' : 'b'; break;
                case 'p': tmp[j] = m == 1 ? 'b' : 'q'; break;
                case 'q': tmp[j] = m == 1 ? 'd' : 'p'; break;
            }
        }
        ans += tmp + '\n';
    }
    cout << ans;
}