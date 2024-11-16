#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];

int main() {
    cin.tie(NULL);
	cin.sync_with_stdio(false);
	int n;
	cin >> n;
    arr[2] = 1, arr[3] = 1;
	for (int i = 4; i <= n; i++) {
	    if (!(i%6)) { arr[i] = min({arr[i/3], arr[i/2], arr[i-1]}); }
        else if (!(i%3)) { arr[i] = min(arr[i/3], arr[i-1]); }
        else if (!(i%2)) { arr[i] = min(arr[i/2], arr[i-1]); }
        else { arr[i] = arr[i-1]; }
        arr[i]++;
	}
	cout << arr[n];
}