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
    // first row i = 0, j from 0 to n - 1
    for (int j = 0; j < n; j++) {
        cout << arr[0][j] << " ";
    }
    // last column j = m - 1 and i from 1 to n - 1
    for (int i = 1; i < n; i++) {
        cout << arr[i][m - 1] << " ";
    }
    // last row i = n - 1 and j from m - 2 to 0
    for (int j = m - 2; j >= 0; j--) {
        cout << arr[n - 1][j] << " ";
    }
    // first column j = 0 and i from n - 2 to 1
    for (int i = n - 2; i >= 1; i--) {
        cout << arr[i][0] << " ";
    }

return 0;
}