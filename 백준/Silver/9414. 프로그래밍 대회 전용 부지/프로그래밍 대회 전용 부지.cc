#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long long pow(unsigned long long base, int exp) {
    unsigned long long res = 1;
    while (exp) {
        if (exp & 1) { res *= base; }
        exp >>= 1;
        base *= base;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, temp;
    cin >> t;
    
    while (t--) {
        vector<int> v;
        while (cin >> temp && temp != 0) {
            v.emplace_back(temp);
        }
        
        sort(v.begin(), v.end(), greater<int>());
        int last = v.back(), exp = 0;
        while (last /= 2) { exp++; }
        if (v.size() * exp > 20) {
            cout << "Too expensive\n";
            continue;
        }
        
        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += 2 * pow(v[i], i+1);
        }
        
        if (sum > 5000000) { cout << "Too expensive\n"; }
        else { cout << sum << '\n'; }
    }

    return 0;
}