#include <iostream>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; 
	cin >> n;
	int val[n+2], res[n+2];
	for (int i = 0; i < n; i++) {
	    cin >> val[i];
	}
	res[0] = val[0];
	res[1] = res[0] + val[1];
	res[2] = val[2] + max(res[0], val[1]);
	for (int i = 3; i < n; i++) {
	    res[i] = val[i] + max(val[i-1] + res[i-3], res[i-2]);
	}
	cout << res[n-1];
}