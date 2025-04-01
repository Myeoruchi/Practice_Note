#include <iostream>
#include <vector>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

int main() {
    FAST_IO;
    int n, joker = 1;
    bool left = true;
    cin >> n;
    while (n--) {
        vector<int> v;
        int tmp, sum = 27;
        while (sum) {
            cin >> tmp;
            v.emplace_back(tmp);
            sum -= tmp;
        }
        
        int cnt = 0;
        left = joker < 14 ? true : false;
        joker = joker < 14 ? joker : joker - 13;
        for (int i = 0; i < v.size(); i++) {
            cnt += v[i];
            if (left) {
                if (i % 2 == 0) { joker += v[i]; }
                else if (cnt >= joker) { break; }
            }
            else {
                if (i % 2 != 0) { joker += v[i]; }
                else if (cnt >= joker) { break; }
            }
        }
    }
    cout << joker;
}