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

    // first row
    for (int j = 0; j < m; j++) {
        cout << arr[0][j] << " ";
    }

    // last column
    for (int i = 1; i < n; i++) {
        cout << arr[i][m - 1] << " ";
    }

    // last row
    for (int j = m - 2; j >= 0; j--) {
        cout << arr[n - 1][j] << " ";
    }

    // first column
    for (int i = n - 2; i >= 0; i--) {
        cout << arr[i][0] << " ";
    }
    return 0;
}


// this shit was pretty cool ngl