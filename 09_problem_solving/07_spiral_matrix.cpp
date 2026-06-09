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
    int sr = 0, er = n - 1, sc = 0, ec = m - 1;
    while (sr <= er and sc <= ec) {
        // first row, i = sr and j from sc to ec
        for (int j = sc; j <= ec; j++) {
            cout << arr[sr][j] << " ";
        }
        // last column, j = ec and i from sr + 1 to er
        for (int i = sr + 1; i <= er; i++) {   
            cout << arr[i][ec] << " ";
        }
        // last row, i = er and j from ec - 1 to sc
        if (sr != er) {
            for (int j = ec - 1; j >= sc; j--) {  
            cout << arr[er][j] << " ";
            }
        }
        if (sc != ec) {
              // first column, j = sc and i from er - 1 to sr + 1
            for (int i = er - 1; i >= sr + 1; i--) {
                cout << arr[i][sc] << " ";
            }
        }
        cout << endl;
        sr++;
        er--;
        sc++;
        ec--;
    }
return 0;
}