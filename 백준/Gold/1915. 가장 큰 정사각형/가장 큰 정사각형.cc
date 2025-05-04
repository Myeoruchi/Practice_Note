#include <bits/stdc++.h>
using namespace std;

int main() {
	int row, col;
	cin >> row >> col;
	int land[row][col];
	int maximum = 0;
	
	for (int i = 0; i < row; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < col; j++) {
			land[i][j] = temp[j] - '0';
		}
	}
	
	if (row == 1 || col == 1) maximum = 1;
		
	else {
		for (int j = 1; j < col; j++) {
			for (int i = row-2; i >= 0; i--) {
				if (land[i][j] == 0) continue;
				land[i][j] = min(land[i+1][j], min(land[i+1][j-1], land[i][j-1])) + 1;
				if (maximum < land[i][j]) maximum = land[i][j];
			}
		}
	}
	cout << maximum*maximum;	
	return 0;
}