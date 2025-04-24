#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0), cin.tie(0)

bool comp (const string &a, const string &b) {
    auto res = mismatch(a.begin(), a.end(), b.begin());
    if (res.first == a.end()) { return true; } 
    if (res.second == b.end()) { return false; }
    if (*res.first == '-') { return false; }
    if (*res.second == '-') { return true; }
    if (toupper(*res.first) == toupper(*res.second)) { return *res.first < *res.second; }
    else { return toupper(*res.first) < toupper(*res.second); }
}

int main() {
    FAST_IO;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<string> v(n);
        for (string &s: v) { cin >> s; }
        sort(v.begin(), v.end(), comp);
        for (const string &s: v) { cout << s << '\n'; }
    }
}