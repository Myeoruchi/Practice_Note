#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	unsigned int arr[6];
	unsigned int n, p;
	double t;
	cin >> n;
	for (int i = 0; i < 6; i++) {
	    cin >> arr[i];
	}
	cin >> t >> p;
	int sum = 0;
	for (int i = 0; i < 6; i++) {
	    sum += ceil(arr[i] / t);
	}
	cout << sum << '\n' << n/p << ' ' << n%p;
}