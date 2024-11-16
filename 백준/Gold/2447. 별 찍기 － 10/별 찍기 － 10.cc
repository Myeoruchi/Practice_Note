#include <iostream>
using namespace std;

void star(int n, int x, int y) {
    if ((x / n) % 3 == 1 && (y / n) % 3 == 1) { cout << ' '; }
    else if (n != 1) { star(n/3, x, y); }
    else { cout << '*'; }
}

int main() {
    cin.tie(NULL);
	cin.sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	        star(n, i, j);
	    }
	    cout << '\n';
	}
}