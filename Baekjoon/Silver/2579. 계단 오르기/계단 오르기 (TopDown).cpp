#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
vector<vector<int>> res;

int dp(int n, int cnt) {
    if (n < 1) { return v[n]; }
    if (res[cnt][n] > 0) { return res[cnt][n]; }
    else if (cnt) { return res[cnt][n] = v[n] + dp(n-2, 0); }
    else { return res[cnt][n] = v[n] + max(dp(n-1, 1), dp(n-2, 0)); }
}

int main() {
    cin.sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	v.resize(n);
	res.resize(2);
	res[0].resize(n);
	res[1].resize(n);
	for (int i = 0; i < n; i++) {
	    cin >> v[i];
	}
	cout << dp(n-1, 0);
}