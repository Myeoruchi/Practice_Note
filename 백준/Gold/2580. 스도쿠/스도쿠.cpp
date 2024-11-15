#include <iostream>
using namespace std;

int arr[9][9];
int rowCheck[9];
int colCheck[9];
int boxCheck[9];
int n = 9;
string ans;

bool possible(int row, int col, int num) {
    return !(rowCheck[row] & (1 << num) || colCheck[col] & (1 << num) || boxCheck[row / 3 * 3 + col / 3] & (1 << num));
}

void sudoku(int row, int col) {
    if (row == 9) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans += to_string(arr[i][j]) + ' ';
            }
            ans += '\n';
        }
        cout << ans;
        exit(0);
    }
    
    if (arr[row][col]) { sudoku((col + 1) / 9 + row, (col + 1) % 9); }
    else {
        for (int num = 1; num <= 9; num++) {
            if (possible(row, col, num)) {
                rowCheck[row] |= 1 << num;
                colCheck[col] |= 1 << num;
                boxCheck[row / 3 * 3 + col / 3] |= 1 << num;
                arr[row][col] = num;
                sudoku((col + 1) / 9 + row, (col + 1) % 9);
                rowCheck[row] -= 1 << num;
                colCheck[col] -= 1 << num;
                boxCheck[row / 3 * 3 + col / 3] -= 1 << num;
            }
        }
        arr[row][col] = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            rowCheck[i] |= 1 << arr[i][j];
            colCheck[j] |= 1 << arr[i][j];
            boxCheck[i / 3 * 3 + j / 3] |= 1 << arr[i][j];
        }
    }
    sudoku(0, 0);
}