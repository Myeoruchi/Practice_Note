#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<pair<int, int>> sejong(n);
    int yeongjae[n], ans[n];

    int temp;    
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sejong[i] = {temp, i};
    }
    for (int i = 0; i < n; i++) {
        cin >> yeongjae[i];
    }
    
    sort(sejong.begin(), sejong.end());
    sort(yeongjae, yeongjae+n);
    
    for (int i = 0; i < n; i++) {
        if (sejong[i].first <= yeongjae[i]) {
            ans[sejong[i].second] = yeongjae[i];
        }
        else { cout << -1; return 0; }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}