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
    
    for (int i = 0; i < n; i++) {
        int rowMin = arr[i][0];
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < rowMin) {
                rowMin = arr[i][j];
                }
            }
    cout << rowMin << " ";
    }
    
    return 0;
}