#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
	cin.sync_with_stdio(false);
	int row, col, res = 64;
	char save = 'B';
	cin >> row >> col;
	int arr[row][col];
	for (int i = 0; i < row; i++) {
	    for (int j = 0; j < col; j++) {
	        char temp;
	        cin >> temp;
	        if (save != temp) { arr[i][j] = 1; }
	        else { arr[i][j] = 0; }
	        save = save == 'B' ? 'W' : 'B';
	    }
	    if (i%2 == 0) { save = 'W'; }
	    else { save = 'B'; }
	}
	for (int i = 0; i <= row-8; i++) {
	    for (int j = 0; j <= col-8; j++) {
	        int sum = 0;
	        for (int r = i; r < i+8; r++) {
	            for (int c = j; c < j+8; c++) {
	                sum += arr[r][c];
	            }
	        }
	        res = min({res, 64-sum, sum});
	        if (res == 0) { cout << res; return 0; }
	    }
	}
	cout << res;
}