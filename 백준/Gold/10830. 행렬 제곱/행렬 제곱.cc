#include <iostream>
#include <vector>
using namespace std;
#define IO ios::sync_with_stdio(0), cin.tie(0)

int n;

auto mul(vector<vector<int>> &v1, vector<vector<int>> &v2) {
    vector<vector<int>> tmp(n, vector<int> (n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                tmp[i][j] += v1[i][k] * v2[k][j];
            }
            tmp[i][j] %= 1000;
        }
    }
    return tmp;
}

int main() {
    IO;
    long long b;
    cin >> n >> b;
    vector<vector<int>> arr(n, vector<int> (n)), ans(n, vector<int> (n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            ans[i][j] = i == j ? 1 : 0;
        }
    }
    
    while (b) {
        if (b & 1) { ans = mul(ans, arr); }
        arr = mul(arr, arr);
        b >>= 1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
}