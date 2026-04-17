#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int firstRow = 0, lastRow = n - 1, firstCol = 0, lastCol = m - 1;

    while (firstRow <= lastRow and firstCol <= lastCol) {
        // fr: sc -> lc
        for (int j = firstCol; j <= lastCol; j++) {
            cout << arr[firstRow][j] << " ";
        }

        // lc: fr + 1 -> lr
        for (int i = firstRow + 1; i <= lastRow; i++) {
            cout << arr[i][lastCol] << " ";
        }
    
        // lr: lc - 1 -> fc
        for (int j = lastCol - 1; j >= firstCol; j--) {
            cout << arr[lastRow][j] << " ";
        }

        // fc: lr - 1 -> fr + 1
        for (int i = lastRow - 1; i >=  firstRow + 1; i--) {
            cout << arr[i][firstCol] << " ";
        }

        firstRow++;
        firstCol++;
        lastRow--;
        lastCol--;
    }

    return 0;
}